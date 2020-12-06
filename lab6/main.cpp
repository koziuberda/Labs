#include <iostream>
#include <cmath>
using namespace std;

double h(double a, double b) {
    return a/(1+b*b) + b/(1+a*a) - pow((a-b),3);
}

double max(double x, double y) {
    if (x >= y) {
        return x;
    } else {
        return y;
    }
}

double F(double s, double t) {
    return h(s,t) + max( pow(h(s-t,s*t),2 ) , pow( h(s-t,s+t),4) ) + h(1,1);
}

int main() {
    double s, t;
    cin >> s >> t;
    cout << F(s,t);
}