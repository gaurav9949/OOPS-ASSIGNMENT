// 27.Write a program to demonstrate the user-defined to user-defined data
// conversion routine located in the destination class.
#include <iostream>
using namespace std;

// Forward declaration of ClassB to resolve circular dependency
class ClassB;

class ClassA {
private:
    int valueA;

public:
    // Constructor to initialize valueA
    ClassA(int val = 0) : valueA(val) {}

    // Function to display valueA
    void display() const {
        cout<< "ClassA value: "<< valueA << endl;
    }

    // Friend function declaration to access private members of ClassA
    friend class ClassB;
};

class ClassB {
private:
    int valueB;

public:
    // Constructor to initialize valueB
    ClassB(int val = 0) : valueB(val) {}

    // Conversion constructor to convert ClassA to ClassB
    ClassB(const ClassA& objA) {
        // Perform conversion (in this case, we just copy the value)
        valueB = objA.valueA;
    }

    // Function to display valueB
    void display() const {
        cout << "ClassB value: " << valueB << endl;
    }
};

int main() {
    // Create an object of ClassA
    ClassA objA(10);
    cout << "Original ";
    objA.display();

    // Convert ClassA object to ClassB using the conversion constructor
    ClassB objB = objA;

    // Display the converted object (ClassB)
    cout << "Converted ";
    objB.display();

    return 0;
}
