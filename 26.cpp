// 26.26.Write a conversion routine in c++ that can convert user-defined data
// distance to basic data float. Assume that the class distance contains two
// data members (feet (integer type) and inch (floating point type). NOTE 1-
// meter = 3.33 feet and 1 feet = 12 inches)

#include <iostream>
using namespace std;

class Distance {
private:
    int feet;        // To store feet (integer type)
    float inch;      // To store inches (floating-point type)

public:
    // Constructor to initialize feet and inch
    Distance(int f = 0, float in = 0.0) : feet(f), inch(in) {}

    // Conversion operator to convert Distance to float (in meters)
    operator float() {
        // Convert feet and inches to meters
        float totalFeet = feet + (inch / 12);  // Convert inches to feet
        float meters = totalFeet / 3.33;       // Convert feet to meters
        return meters;
    }

    // Function to display the distance
    void display() const {
        cout << "Feet: " << feet << ", Inches: " << inch << endl;
    }
};

int main() {
    // Create a Distance object
    Distance d1(10, 6.0);  // 10 feet 6 inches

    // Display the original distance
    cout << "Original Distance: ";
    d1.display();

    // Convert Distance object to meters (float type)
    float distanceInMeters = d1;

    // Display the result in meters
    cout << "Converted Distance in meters: " << distanceInMeters << " meters" << endl;

    return 0;
}
