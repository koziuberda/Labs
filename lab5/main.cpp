#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i=2; (pow(2, i)-1) <= n; i++) {
      int amount_of_divisors = 0;
      int current_number = pow(2, i) - 1;
      int j = 1;
      for (j; j<=current_number;j++) {
          if(current_number%j==0) {
              amount_of_divisors++;
          }
      }
      if (amount_of_divisors==2){
          cout << current_number << endl;
      }
  }
    
  return 0;
}