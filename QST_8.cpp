
#include <iostream>
using namespace std;

void printFactors(int num, int start = 1) {
    for (int i = start; i <= num; ++i) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    printFactors(n);
    return 0;
}

