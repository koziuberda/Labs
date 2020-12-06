#include <iostream>
using namespace std;

int main() {
    int F_previous = 1;
    int F_before_previous = 0;
    int n;
    cin >> n;
    int Fn;
    for(int i=1;i<n;i++) {
        Fn = F_previous + F_before_previous;
        F_before_previous = F_previous;
        F_previous = Fn;
    }
    cout << Fn << endl;
    system("pause");
}