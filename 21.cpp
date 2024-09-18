// 21.WAP to add, private data members of two classes using friend function
#include <iostream>
using namespace std;

class Class2;  // Forward declaration of Class2

class Class1 {
private:
    int value1;

public:
    // Constructor to initialize value1
    Class1(int v1) : value1(v1) {}

    // Declare the friend function
    friend int addValues(Class1, Class2);
};

class Class2 {
private:
    int value2;

public:
    // Constructor to initialize value2
    Class2(int v2) : value2(v2) {}

    // Declare the friend function
    friend int addValues(Class1, Class2);
};

// Friend function definition
int addValues(Class1 obj1, Class2 obj2) {
    return obj1.value1 + obj2.value2;
}

int main() {
    // Create objects of both classes and initialize their private members
    Class1 obj1(10);
    Class2 obj2(20);

    // Call the friend function to add private members
    int sum = addValues(obj1, obj2);
    cout << "Sum of private data members: " << sum << endl;

    return 0;
}
