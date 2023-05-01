
#include <iostream>
using namespace std;

void printEven(int arr[], int size) {
    cout << "Even elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
void printOdd(int arr[], int size) {
    cout << "Odd elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}


void sumAndAverage(int arr[], int size) {
    int sum = 0;
    float average;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    average = static_cast<float>(sum) / size;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
}

void findMaxAndMin(int arr[], int size) {
    int max = arr[0], min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
}

int main() {
    int size, choice;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    do {
        cout << "\nChoose an option:\n";
        cout << "1. Print the even-valued elements\n";
        cout << "2. Print the odd-valued elements\n";
        cout << "3. Calculate and print the sum and average of the elements\n";
        cout << "4. Print the maximum and minimum element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                printEven(arr, size);
                break;
            case 2:
                printOdd(arr, size);

                break;
            case 3:
                sumAndAverage(arr, size);
                break;
            case 4:
                findMaxAndMin(arr, size);
                break;
            case 5:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    return 0;
} 
