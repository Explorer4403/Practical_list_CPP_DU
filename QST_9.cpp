#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two numbers:\n";
    cin >> num1 >> num2;

    cout << "Before swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    // Swapping the numbers
    int temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping:\n";
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
 
