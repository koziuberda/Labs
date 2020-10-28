#include <iostream>
using namespace std;

int main() {
    float a = 0;
    cout << "Enter cube edge length:";
    cin >> a;
    
    cout << "Lateral surface area = " << 4 * a * a << endl;
    cout << "Volume of the cube = " << a * a * a << endl;

    system("pause");
    return 0;
}