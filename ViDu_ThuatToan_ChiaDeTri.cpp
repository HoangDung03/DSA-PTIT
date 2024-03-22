#include <iostream>
#include <vector>
using namespace std;

int power(int x, int n) {
  if (n == 0) {
    return 1;
  }
  int y = power(x, n / 2);
  if (n % 2 == 0) {
    return y * y;
  } else {
    return x * y * y;
  }
}

int main() {
  int x = 3, n = 5;
  cout << x << "^" << n << " = " << power(x, n) << endl;
  return 0;
}

