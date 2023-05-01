
#include <iostream>
using namespace std;
// Function to calculate the area of a rectangle
float Area(float length, float width) {
    return length * width;
}
// Function to calculate the area of a square
float Area(float side) {
    return side * side;
}
// Function to calculate the area of a triangle
float Area(float base, float height, char c) {
    return 0.5 * base * height;
}
int main() {
    char choice;
    do {
        cout << "Enter 'r' for rectangle, 's' for square, or 't' for triangle: ";
        cin >> choice;

        float length, width, side, base, height;
        float area;


        switch(choice) {
            case 'r':
                cout << "Enter length and width of rectangle: ";
                cin >> length >> width;
                area = Area(length, width);
                cout << "Area of rectangle = " << area << endl;
                break;
            case 's':
                cout << "Enter side of square: ";
                cin >> side;
                area = Area(side);
                cout << "Area of square = " << area << endl;
                break;
            case 't':
                cout << "Enter base and height of triangle: ";
                cin >> base >> height;
                area = Area(base, height, 't');
                cout << "Area of triangle = " << area << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }

        cout << "Do you want to calculate the area of another shape? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
 
