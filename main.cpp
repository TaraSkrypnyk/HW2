#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    int d1, m1, r1, d2, m2, r2, dm1, dm2;
    long long days1, days2, rez;
    cout << "Vvedit pershu datu: ";
    cin >> d1;
    cout << "Vvedit pershiy misyats: ";
    cin >> m1;
    cout << "Vvedit pershiy rik: ";
    cin >> r1;
    cout << "Vvedit druhu datu: ";
    cin >> d2;
    cout << "Vvedit druhiy misyats: ";
    cin >> m2;
    cout << "Vvedit druhiy rik: ";
    cin >> r2;
    switch (m1)
    {
    case 1:
        dm1 = 0;
        break;
    case 2:
        dm1 = 31;
        break;
    case 3:
        dm1 = 59;
        break;
    case 4:
        dm1 = 90;
        break;
    case 5:
        dm1 = 120;
        break;
    case 6:
        dm1 = 151;
        break;
    case 7:
        dm1 = 181;
        break;
    case 8:
        dm1 = 212;
        break;
    case 9:
        dm1 = 243;
        break;
    case 10:
        dm1 = 273;
        break;
    case 11:
        dm1 = 304;
        break;
    case 12:
        dm1 = 334;
        break;
    }
    switch (m2)
    {
    case 1:
        dm2 = 0;
        break;
    case 2:
        dm2 = 31;
        break;
    case 3:
        dm2 = 59;
        break;
    case 4:
        dm2 = 90;
        break;
    case 5:
        dm2 = 120;
        break;
    case 6:
        dm2 = 151;
        break;
    case 7:
        dm2 = 181;
        break;
    case 8:
        dm2 = 212;
        break;
    case 9:
        dm2 = 243;
        break;
    case 10:
        dm2 = 273;
        break;
    case 11:
        dm2 = 304;
        break;
    case 12:
        dm2 = 334;
        break;
    }
    days1 = ((r1 * 365) + (r1 / 4)) + dm1 + d1;
    days2 = ((r2 * 365) + (r2 / 4)) + dm2 + d2;
    rez = abs(days1 - days2);
    cout <<"Interval " << rez << " dniv";
    return 0;
}