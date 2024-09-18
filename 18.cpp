// 18.Create a class Counter with a static data member to count the number of
// objects created. Define a member function to display the count. Create
// multiple objects of this class and display the count after each creation.
#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static data member to keep track of the number of objects

public:
    // Constructor
    Counter() {
        count++; // Increment count when a new object is created
    }

    // Destructor
    ~Counter() {
        count--; // Decrement count when an object is destroyed
    }

    // Member function to display the count
    void displayCount() const {
        cout << "Number of Counter objects: " << count << endl;
    }

    // Static member function to display the count
    static void displayStaticCount() {
        cout << "Number of Counter objects: " << count << endl;
    }
};

// Initialize static data member
int Counter::count = 0;

int main() {
    // Create first object
    Counter c1;
    Counter::displayStaticCount(); // Display count after creating the first object

    // Create second object
    Counter c2;
    Counter::displayStaticCount(); // Display count after creating the second object

    // Create third object
    Counter c3;
    Counter::displayStaticCount(); // Display count after creating the third object

    // Display count using an object method
    c1.displayCount(); // Count should be the same as the static method's count

    // Destroy one object
    {
        Counter c4;
        Counter::displayStaticCount(); // Display count after creating and destroying an object
    } // c4 goes out of scope here

    // Display count after destruction
    Counter::displayStaticCount(); // Count should be decremented

    return 0;
}
