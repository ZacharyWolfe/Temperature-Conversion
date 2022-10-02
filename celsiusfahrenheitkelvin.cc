/*

AUTHOR : ZACHARY WOLFE
DATE: 9/16/2022
LAB #3
PURPOSE: THIS PROGRAM DETERMINES THE CORRECT CONVERSIONS FOR THE COMMON TEMPERATURES CELSIUS AND FAHRENHEIT, IF NEEDED KELVIN CAN BE DETERMINED AS WELL.

*/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

double conversion(double c, double f, double k);

int main()
{
    //variables to store the equivalent Fahrenheit and Celsius temperatures
    double celsius_to_fahrenheit;
    double fahrenheit_to_celsius;
    double fahrenheit;
    double celsius;
    double kelvin;
    //ask for input
    cout << "Enter the first temperature in Celsius: ";
    cin >> celsius;
    cout << "Enter the second temperature in Fahrenheit: ";
    cin >> fahrenheit;
    cout << "Enter the third temperature in Kelvin: ";
    cin >> kelvin;

    //run conversion
    conversion(celsius, fahrenheit, kelvin);
    cout << endl;
     
    return 0;
}

//celsius then fahrenheit for arguments
double conversion(double c, double f, double k)
{
    double kf = 0;
    double kc = 0;
    //conversions
    kc = (k - 273.15);
    kf = ((k - 273.15) * 9/5 + 32);
    c = (c * 9/5) + 32;
    f = (f - 32) * 5/9;

    cout << "\nThe correct conversions are: \nCelsius-to-Fahrenheit: " << fixed << setprecision(1) << c << endl;
    cout << "Fahrenheit-to-Celsius: " << fixed << setprecision(1) << f << endl;
    cout << "Kelvin-to-celsius: " << fixed << setprecision(1) << kc << endl;
    cout << "Kelvin-to-fahrenheit: " << fixed << setprecision(1) << kf << endl;

    return 0;
}
