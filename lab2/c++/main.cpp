#include <iostream>
using namespace std;

int main() {
    double x, y, r1, r2;
    cin >> x >> y;
    if (x*x + y*y > r1*r1 && x*x +y*y < r2*r2) {
       cout << "The point is in the area";
    } else {
        cout << "so sad but there is no such points :(";
    }
    system("pause");
    return 0;
}