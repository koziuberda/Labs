#include <iostream>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    if (x*x + y*y <=1 && (y>=x || y>=-x)) {
        cout << "The point is in the area";
    } else {
        cout << "There is no such points";
    }
    system("pause");
}