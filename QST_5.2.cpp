#include <iostream>
using namespace std;

int main() {
    int user_input, fact = 1;

    cout << "Enter a number: ";
    cin >> user_input;

    for (int i = 1; i <= user_input; i++) {
        fact *= i;
    }

    cout << "Factorial of " << user_input << " is: " << fact << endl;

    return 0;
}
