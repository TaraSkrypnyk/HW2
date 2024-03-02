#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    double AB, BC, M, V, VN = 0, Vab = 0, Vbc = 0;
    cout << "Vvedit vidstan mizh A ta B: ";
    cin >> AB;
    cout << "Vvedit vidstan mizh B ta C: ";
    cin >> BC;
    cout << "Vvedit masu vantazhu: ";
    cin >> M;
    if (0 <= M && M <= 500)
    {
        VN = 1;

    }
    else if (500 < M && M <= 1000)
    {
        VN = 4;
    }
    else if (1000 < M && M <= 1500)
    {
        VN = 7;
    }
    else if (1500 < M && M <= 2000)
    {
        VN = 9;
    }
    else
    {
        cout << "Game Over" << endl;
    }
    Vab = AB * VN;
    Vbc = BC * VN;
    V = Vbc - (300 - Vab);
    if (Vab < 0 || Vbc < 0)
    {
        cout << "Game Over" << endl;
    }
    if (V < 0)
    {
        cout << "The plane doesn`t need the refuel" << endl;
    }
    else if (V > 300)
    {
        cout << "Game Over" << endl;
    }
    else
    {
        cout <<"You need to fill up " << V << "liters" << endl;
    }

    
    return 0;
}