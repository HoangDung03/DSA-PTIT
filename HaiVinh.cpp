#include <iostream>

using namespace std;

class Vector {
private:
    int n;          
    double *v;      

public:
    Vector() {      
        n = 0;
        v = nullptr;
    }

    Vector(int N) { 
        n = N;
        v = new double[n];
        for (int i = 0; i < n; i++) {
            v[i] = 0;
        }
    }

    Vector(int N, double *V) { 
        n = N;
        v = new double[n];
        for (int i = 0; i < n; i++) {
            v[i] = V[i];
        }
    }

    Vector(const Vector &other) { 
        n = other.n;
        v = new double[n];
        for (int i = 0; i < n; i++) {
            v[i] = other.v[i];
        }
    }

    ~Vector() { 
        if (v != nullptr) {
            delete [] v;
        }
    }

    Vector& operator=(const Vector &other) { 
        if (this != &other) {
            if (v != nullptr) {
                delete [] v;
            }
            n = other.n;
            v = new double[n];
            for (int i = 0; i < n; i++) {
                v[i] = other.v[i];
            }
        }
        return *this;
    }

    Vector operator+(const Vector &other) {
        if (n != other.n) {
            std::cerr << "Error: vector dimensions not match!\n";
            return Vector();
        }
        Vector result(n);
        for (int i = 0; i < n; i++) {
            result.v[i] = v[i] + other.v[i];
        }
        return result;
    }

    void printVector() {
       cout << "[";
        for (int i = 0; i < n; i++) {
            cout << " " << v[i];
        }
        cout << " ]\n";
    }
};


int main() {
    double a[3] = {1.0, 2.0, 3.0};
    double b[3] = {0.5, 1.5, 2.5};
    Vector A(3, a);
    Vector B(3);
    B = Vector(3, b);
    Vector C;
    C = A + B;
    A.printVector();
    B.printVector();
    C.printVector();
    return 0;
}
 
 

