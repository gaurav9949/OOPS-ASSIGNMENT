// 16.Write a program to demonstrate the objects are destroyed in the reverse
// order from their creation in the constructor
#include <iostream>
using namespace std;

class Demo {
    string name;
public:
    // Constructor
    Demo(string n) : name(n) {
        cout << "Constructor called for " << name << endl;
    }
    
    // Destructor
    ~Demo() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    // Creating objects
    cout << "Creating objects A, B, C..." << endl;
    Demo A("A");  // First created
    Demo B("B");  // Second created
    Demo C("C");  // Third created
    cout << "Exiting main..." << endl;

    // Objects will be destroyed in reverse order of their creation
    return 0;
}


