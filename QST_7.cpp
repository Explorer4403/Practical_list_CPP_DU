#include <iostream>
using namespace std;
int main() {
    int user_input, i;
    bool is_Prime = true;
    char choice;
    do{ cout << "Enter a positive integer: ";
    cin >> user_input;
    if (user_input == 1) {
        cout << "1 is not a prime number." << endl;
    } else {
        for (i = 2; i <= user_input / 2; ++i) {
            if (user_input % i == 0) {
                is_Prime = false;
                break;
            }
        }
        if (is_Prime)
            cout << user_input << " is a prime number." << endl;
        else
            cout << user_input << " is not a prime number." << endl;
    }
    cout<<"Do you want to continue ? enter[Y/N] : ";
    cin>>choice;}

    while (choice=='y' || choice=='Y');
    return 0;
}
