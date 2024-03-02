#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int a, l=0, r=0;
    cout << "Vvedit cile shestyznachne chislo: ";
    cin >> a;
    while (a > 999999 || a < 100000)
    {
        cout << "Vvedit cile shestyznachne chislo: ";
        cin >> a;
    }
    l = (a / 100000) + ((a / 10000) % 10) + ((a / 1000) % 10);
    r = a%10 + ((a / 100) % 10) + ((a / 10) % 10);
    if (l == r)
    {
        cout << "Vashe chislo shchaslyve" << endl;

    }
    else
    {
        cout << "Vashe chislo ne shchaslyve" << endl;
    }
    return 0;
}
