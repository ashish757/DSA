//
// Created by Ashish Raj Singh on 04/08/25.
//
#include <iostream>
using namespace std;

// access modifiers/specifiers
// copy constructor --> shallow and deep copy
// constructor and destructor
// static keyword


// Encapsulation
// wrapping up of data & member functions in a single unit called class.


// Inheritance
// multiple inheritance : a single child class inherits from multiple parent classes
// Hierarchical Inheritance : multiple child class inherits form a single parent class


// Polymorphism
// ploy -> multiple morph-> forms
// Polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used.
// types --> 1. runtime polymorphism 2. compile time polymorphism
// examples of compile time polymorphism
// --> constructor overloading
                // non - parametrized constructor.
                // parametrized constructor.
                // copy constructor.
// --> function/method overloading
// --> operator overloading
// examples of runtime/dynamic polymorphism
// --> function overriding (dependent upon inheritance)
        // Parent & Child both contain the same function with different implementation.
        // The parent class function is said to be overridden.
// --> virtual function
        // A virtual function is a member function that you expect to be redefined/overriden in derived classes.
        // Virtual functions are Dynamic in nature
        // A virtual function is called during runtime


// Abstraction
// Hiding all unnecessary details & showing only the important parts
// Abstraction is implemented by
// --> access modifiers/specifiers
// --> Abstract class
// abstract classes are used to provide a base class from which other classes can be derived.
// • They cannot be instantiated and are meant to be inherited.
// • Abstract classes are typically used to define an interface for derived classes.


// a class with pure virtual function automatically becomes a abstract class

class Person {
    public:
    string name;
    int age{};

    Person() {
        cout<<"constructor 1"<<endl;
    }

    Person(string name, int age) {
        this->name = name;
        this->age = age;
        cout<<"constructor 2"<<endl;
    }

    virtual void getInfo() const {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }

    virtual void func() {
        cout<<"func"<<endl;
    }

};

class Student : public Person {
    public:
    char grade;

    Student(string name, int age, char grade) : Person(name, age) {
        cout<<"student constructor";
        this->grade = grade;
    }

    void getInfo() const {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"grade: "<<grade<<endl;

    }

    void func() final {
        cout<<"func"<<endl;
    }

    ~Student() {
        cout<<"student destructor"<<endl;
    }
};



int main() {
    Person p("John Wick", 28);
    p.getInfo();
    Student s("Ayanokoji", 18, 'A');
    s.getInfo();
    return 0;
}