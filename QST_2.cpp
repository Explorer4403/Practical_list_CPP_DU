#include <iostream>
using namespace std;

int main() {
    int user_input, reversed_Num = 0;

    cout << "Enter a number: ";
    cin >> user_input;

    while (user_input != 0) {
        int digit = user_input % 10;
        reversed_Num = reversed_Num * 10 + digit;
        user_input /= 10;
    }
    cout << "The reversed number is: " << reversed_Num << endl;

    return 0;
}

