
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

class Employee {
protected:
    string name;
    int age;
public:
    Employee(string n, int a) : name(n), age(a) {}
    virtual ~Employee() {} 
    virtual void print() const {
        cout << "Ten: " << name << ", Tuoi: " << age << endl;
    }
};

class ContractEmployee : public Employee {
private:
    double hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(string n, int a, double r, int h)
            : Employee(n, a), hourlyRate(r), hoursWorked(h) {}
    ~ContractEmployee() {}
    void print() const override {
        cout << "Contract Employee - ";
        Employee::print();
        cout << "Hourly Rate: " << hourlyRate << ", Hours Worked: " << hoursWorked << endl;
    }
};

class PermanentEmployee : public Employee {
private:
    double salary;
public:
    PermanentEmployee(string n, int a, double s)
            : Employee(n, a), salary(s) {}
    ~PermanentEmployee() {}
    void print() const override {
        cout << "Permanent Employee - ";
        Employee::print();
        cout << "Salary: " << salary << endl;
    }
};

int main() {

    vector<Employee*> employees;

    //Du lieu mau
    employees.push_back(new ContractEmployee("John Smith", 25, 12.50, 40));
    employees.push_back(new PermanentEmployee("Mary Johnson", 35, 50000));
    employees.push_back(new ContractEmployee("Bob Brown", 28, 15.75, 30));
    employees.push_back(new PermanentEmployee("Alice Davis", 40, 80000));

    // In danh sách
    cout << "List of employees:" << endl;
    for (Employee *emp : employees) {
        emp->print();
    }

    // Xóa nhân viên hop dong thoi vu
    for (size_t i = 0; i < employees.size(); i++) {
        if (dynamic_cast<ContractEmployee*>(employees[i]) != nullptr) {
            delete employees[i];
            employees[i] = nullptr; //Chuan bi xóa khoi danh sách
        }
    }

    // Loai bo các phan tu da duoc danh dau de xoa 
    employees.erase(
            std::remove(employees.begin(), employees.end(), nullptr), employees.end());

    // In danh sách da duoc xóa
    cout << "List after deleting contract employees:" << endl;
    for (Employee *emp : employees) {
        emp->print();
    }

    // Xóa nhân viên chính thuc
    for (size_t i = 0; i < employees.size(); i++) {
        if (dynamic_cast<PermanentEmployee*>(employees[i]) != nullptr) {
            delete employees[i];
            employees[i] = nullptr; // chuan bi xoa khoi danh sách
        }
    }

    // Loai bo các phan tu da duoc danh dau de xoa 
    employees.erase(
            std::remove(employees.begin(), employees.end(), nullptr),
            employees.end());

    // In danh sách da duoc xóa hoàn toàn
    cout << "List after deleting all employees:" << endl;
    for (Employee *emp : employees) {
        emp->print();
    }

    // Giai phong bo nho
    for (Employee *emp : employees) {
        delete emp;
    }

    return 0;
}

