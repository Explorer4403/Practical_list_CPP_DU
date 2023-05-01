 
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() {}
    Person(string n, int a) : name(n), age(a) {}
    Person(const Person& p) : name(p.name), age(p.age) {}
    virtual void get_data() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // ignore the newline character left in the input buffer
    }
    void display_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    virtual ~Person() {}
};

class Teacher : public Person {
private:
    string specialization;
public:
    Teacher() {}
    Teacher(string n, int a, string s) : Person(n, a), specialization(s) {}
    Teacher(const Teacher& t) : Person(t), specialization(t.specialization) {}
    void get_data() override {
        Person::get_data();
        cout << "Enter specialization: ";
        getline(cin, specialization);
    }
    string get_specialization() {
        return specialization;
    }
};

class Student : public Person {
private:
    string class_name;
public:
    Student() {}
    Student(string n, int a, string c) : Person(n, a), class_name(c) {}
    Student(const Student& s) : Person(s), class_name(s.class_name) {}
    void get_data() override {
        Person::get_data();
        cout << "Enter class name: ";
        getline(cin, class_name);
    }
    string get_class() {
        return class_name;
    }
};

int main() {
    Person p1("John", 30);
    p1.display_data();

    Teacher t1("Mary", 40, "Mathematics");
    t1.get_data();
    t1.display_data();
    cout << "Specialization: " << t1.get_specialization() << endl;

    Student s1("Alice", 20, "Engineering");
    s1.get_data();
    s1.display_data();
    cout << "Class name: " << s1.get_class() << endl;

    return 0;
} 
