#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;


int main() {
    double sell, max = 0, num = 0, rez;
    for (int i = 0; i < 3; i++)
    {
        cout << "Vvedit riven prodazhiv menedzhera: ";
        cin >> sell;
        if (max < sell)
        {
            max = sell;
            num = i + 1;
        }
    }
    if (0 <= max && max <= 500)
    {
        max = max * 0.03;

    }
    else if (500 < max && max <= 1000)
    {
        max = max * 0.05;
    }
    else if (1000 < max)
    {
        max = 0.08;
    }
    rez = 400 + max;
    
    cout << "Menedzher pid nomerom " << num << " naykrashchiy. Vin otrymav " << rez << "$" << endl;
    return 0;
}