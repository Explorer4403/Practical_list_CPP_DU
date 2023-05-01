#include <iostream>
using namespace std;

int main() {
    float celsius_user_input, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius_user_input;

    fahrenheit = (celsius_user_input * 9.0/5.0) + 32;

    cout << celsius_user_input << " degrees Celsius is equal to " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}
