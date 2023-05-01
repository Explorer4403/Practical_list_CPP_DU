 
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char *name;
    int age;

public:
    // Default constructor
    Person() {
        name = new char[1];
        name[0] = '\0';
        age = 0;
    }

    // Overloaded constructor 1
    Person(const char *n, int a) {
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
    }

    // Overloaded constructor 2
    Person(const Person& p) {
        name = new char[strlen(p.name) + 1];
        strcpy(name, p.name);
        age = p.age;
    }

    // Destructor
    ~Person() {
        delete [] name;
    }

    // Member function to get data
    void get_data() {
        cout << "Enter name: ";
        char temp[100];
        cin.getline(temp, 100);
        name = new char[strlen(temp) + 1];
        strcpy(name, temp);

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();  // ignore newline character
    }

    // Member function to display data
    void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    // Create object using default constructor
    Person p1;
    p1.get_data();
    cout << "Data of person 1:\n";

    p1.display_data();

    // Create object using overloaded constructor 1
    Person p2("John", 25);
    cout << "Data of person 2:\n";
    p2.display_data();

    // Create object using copy constructor
    Person p3 = p2;
    cout << "Data of person 3 (copy of person 2):\n";
    p3.display_data();

    return 0;
} 
