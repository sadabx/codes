#include <iostream>
using namespace std;

int main()
{
    double fahr, cel;

    cout << "Enter temperature in fahrenheit: ";
    cin >> fahr;
    cel = (fahr - 32) * (5 / 9.0);
    cout << "Temperature in Celcius is: " << cel;
    return 0;
}