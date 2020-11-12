#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double factorial(int num) {
    double res = 1;
    for (int i = 1; i <= num; i++) {
        res *= i;
  }
    return res;
}

int main() {
    double x;
    cout << "Enter some x: ";
    cin >> x;
    double eps = 0.00001;
    int i = 1;
    double current = 1;
    double previous = 0;

    while (current - previous > eps) {
        previous = current;
        current = previous + pow(x, i)/factorial(i);
        i++;
    }
    cout << setprecision(5) << fixed;
    cout << "The result is " << current;
    system("pause");
}