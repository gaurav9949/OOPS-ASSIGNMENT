#include<iostream>
using namespace std;

class Distance {
private:
    int inch;
    int feet;

public:
    // Constructor to initialize feet and inch to 0
    Distance() {
        feet = 0;
        inch = 0;
    }

    // Function to input data for Distance objects
    void inputdata() {
        cout << "Enter the feet: ";
        cin >> feet;
        cout << "Enter the inches: ";
        cin >> inch;

        // Normalize inches if greater than or equal to 12
        while (inch >= 12) {
            inch -= 12;
            feet++;
        }
    }

    // Function to display the data of Distance objects
    void showdata() const {
        cout << "Feet: " << feet << ", Inches: " << inch << endl;
    }

    // Function to add two Distance objects
    void addDistances(const Distance &d1, const Distance &d2) {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;

        // Normalize the inches after adding
        while (inch >= 12) {
            inch -= 12;
            feet++;
        }
    }
};

int main() {
    Distance d1, d2, result;

    // Input data for Distance objects
    cout << "Enter details for Distance 1:\n";
    d1.inputdata();

    cout << "Enter details for Distance 2:\n";
    d2.inputdata();

    // Add the two Distance objects and store in result
    result.addDistances(d1, d2);

    // Display data of Distance objects
    cout << "\nDistance 1: ";
    d1.showdata();

    cout << "Distance 2: ";
    d2.showdata();

    // Display the result after addition
    cout << "Result after adding both distances: ";
    result.showdata();

    return 0;
}
