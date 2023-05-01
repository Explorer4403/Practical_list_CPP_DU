#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int user_input;
    cout << "Enter a number: ";
    cin >>user_input ;
    cout << "Factorial of " << user_input << " is: " << factorial(user_input) << endl;
    return 0;
}
