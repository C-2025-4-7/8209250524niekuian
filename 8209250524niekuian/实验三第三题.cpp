#include <iostream>
#include "mytemperature.h"
using namespace std;

int main()
{
    double c = 30.0, f = 30.0;
    cout << "Celsius    Fahrenheit" << endl;
    for (int i = 30; i <= 40; i++)
    {
        cout << c << "    " << celsius_to_fah(c) << endl;
        c++;
    }
    cout << "Fahrenheit    Celsius" << endl;
    for (int j = 30; j <= 120; j += 10)
    {
        cout << f << "    " << fahrenheit_to_cels(f) << endl;
        f += 10;
    }
    return 0;
}