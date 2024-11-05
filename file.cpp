#include <iostream>
using namespace std;

int main() {
    double fh, cel;

    cout << "Enter the temperature in fahrenheit: ";
    cin >> fh;

    cel = 5/9*fh+32;

    cout << "Temperature in celsius is " << cel;
}