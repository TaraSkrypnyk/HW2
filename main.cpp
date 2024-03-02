#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int a, x1, x2, x3, x4;
    cout << "Vvedit cile chotyryznachne chislo: ";
    cin >> a;
    while (a > 9999 || a < 1000)
    {
        cout << "Vvedit cile chotyryznachne chislo: ";
        cin >> a;
    }
    x1 = a / 1000;
    x2 = (a / 100) % 10;
    x3 = (a / 10) % 10;
    x4 = a % 10;
    cout << x2 << x1 << x4 << x3;
    return 0;
}