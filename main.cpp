#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    double max = 0, a;
    for (int i = 0; i < 7; i++)
    {
        cout << "Vvedit " << i+1 << " chislo: ";
        cin >> a;
        if (a > max)
        {
            max = a;
        }
    }
    cout <<"Max = " << max;
    return 0;
}