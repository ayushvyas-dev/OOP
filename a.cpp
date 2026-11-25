// Class: blueprint for object, contains attributes and methods
// Object: real world entity

// Access Modifier: public,private,protected
// by default everything is pvt
// private: data & methods accessible inside class
// public: data & methods accessible to everyone
// private: data & methods accessible inside class & to its derived class

// 4 pillars of OOP: encapsulation, inheritance, abstraction, polymorphism

// Encapsulation: wrapping up of data & member functions in a single unit called class


#include <iostream>
#include <string>
using namespace std;

class Teacher {

private:
    double salary;

public:
    string name;
    string dept;
    string subject;
    

    void changeDept(string newDept) {
        dept = newDept;
    }
    // setter
    void setSalary(double s) {
        salary = s;
    }
    // getter
    double getSalary() {
        return salary;
    }
};

int main() {
    Teacher t1;
    t1.name = "Ayush";
    t1.dept = "CS";
    t1.subject = "Physics";
    t1.setSalary(25000);

    cout<< t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}


// constructor: method used to initialise object
// same name as class, doesnt have return type, only called once(automatically), memory allocation happen when constructor is called, its always public
// types of constructor: non parameterised,parameterised,copy

// multiple constructors within same class is example of constructor overlaoding(example of polymorphism)

// this: pointer that points to current object
// (*this).prop same as this->prop

// copy constructor: copy properties of one object into other

// shallow copy: by default compiler does this
// deep copy: for dynamic allocated memory
// new keyword is used for dynamic allocation
// delete keyword is used for deallocation of dynamic memory

// destructor: deallocation of memory
// same name as class, with ~className()

// inheritance: when a class inherits properties and members of another class
// Base class: whose properties are inherited
// Derived Class: Which inherits properties 

// three modes of inheritance: 

// types of inheritance: single, multilevel,heirarchical,multiple,hybrid

// polymorphism: the ability of object to take different forms or behave differently depending on the context in which they are used

// types of polymorphism: compile time, runtime

// types of Compile time: Function,constructor,operator overlaoding
// types of runtime: Function overriding, virtual functions

// virtual function: which is redefined in the derived class(virtual keyword is used)

// abstraction: hiding all unnecessary details, showing only important part, using access modifiers

// abstract class: used to provide a base class from which other class can be derived

// static keyword: static veriables are created & initialised once in lifetime of a program, shared by all objects of class

