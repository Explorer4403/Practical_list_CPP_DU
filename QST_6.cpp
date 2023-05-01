#include <iostream>
using namespace std;
int main() {
    int m1, m2, m3, m4;
    float total, percentage;
    char choice;
    do {
        total = 0;
        cout << "Enter marks in four subjects:\n";
        cout << "Subject 1: "; cin >> m1;
        if (m1 <= 100) {
            cout << "Subject 2: "; cin >> m2;
            if (m2 <= 100) {
                cout << "Subject 3: "; cin >> m3;
                if (m3 <= 100) {
                    cout << "Subject 4: "; cin >> m4;
                    if (m4 <= 100) {
                        total = m1 + m2 + m3 + m4;
                        percentage = total / 4;
                        cout << "Percentage = " << percentage << "%\n";
                        if (percentage >= 90) {
                            cout << "Grade: A+\n";
                        } else if (percentage >= 80) {
                            cout << "Grade: A\n";
                        } else if (percentage >= 70) {
                            cout << "Grade: B\n";
                        } else if (percentage >= 60) {
                            cout << "Grade: C\n";
                        } else if (percentage >= 50) {
                            cout << "Grade: D\n";
                        } else {
                            cout << "Grade: F\n";
                        }
                    } else {
                        cout << "Invalid marks for Subject 4. Enter marks again.\n";
                    }
                } else {
                    cout << "Invalid marks for Subject 3. Enter marks again.\n";
                }
            } else {
                cout << "Invalid marks for Subject 2. Enter marks again.\n";
            }
        } else {
            cout << "Invalid marks for Subject 1. Enter marks again.\n";
        }
        cout << "Do you want to enter marks for another student? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return 0;
}
