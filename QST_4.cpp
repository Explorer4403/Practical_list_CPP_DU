#include <iostream>
using namespace std;

int main() {
    int user_input, sum = 0, sign = 1;

    cout << "Enter the number of terms: ";
    cin >> user_input;

    for (int i = 1; i <= user_input; i++) {
        sum += sign * i;
        sign = -sign;
    }
    cout << "The sum of the first " << user_input << " terms of the series is: " << sum << endl;
    return 0;
}

