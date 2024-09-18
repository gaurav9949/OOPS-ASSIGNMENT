// 17.Write a class Complex to represent complex numbers with real and
// imaginary parts. Define a member function to add two complex numbers.
// Pass objects of the Complex class to this function and display the result
#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Default constructor
    Complex() : real(0), imag(0) {}

    // Parameterized constructor
    Complex(float r, float i) : real(r), imag(i) {}

    // Member function to add two complex numbers
    Complex add(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Member function to display the complex number
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    // Create Complex objects using different constructors
    Complex c1;           // Default constructor: 0 + 0i
    Complex c2(3.5, 2.5); // Parameterized constructor: 3.5 + 2.5i

    // Add the two complex numbers
    Complex c3 = c1.add(c2);

    // Display the result
    cout << "The sum of ";
    c1.display();
    cout << "and ";
    c2.display();
    cout << "is ";
    c3.display();

    return 0;
}
