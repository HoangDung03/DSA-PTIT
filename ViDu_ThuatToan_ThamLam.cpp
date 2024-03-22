#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void optimalCoinChange(int num, vector<int> coins) {
  
  sort(coins.begin(), coins.end(), greater<int>());
  
  for(int i=0; i<coins.size(); i++) {
    while(num >= coins[i]) {
      cout << coins[i] << " ";
      num -= coins[i];
    }
  }
}

int main() {
  int n = 16;
  vector<int> coins = {1, 2, 5, 10};
  optimalCoinChange(n, coins);
  return 0;
}

