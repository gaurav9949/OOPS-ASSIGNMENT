// Define a class Interest with following specifications:

// a. Data Members
// i. principal
// ii. time
// iii. rate
// b. Member Functions
// i. getdata() to assign initial values
// ii. display () to display values
// iii. Findinterest() to find and display the interest

#include<iostream>
using namespace std;
class Interest{
public:
float p;
float t;

float r;
float i=0;
void getdata(){
    cout<<"Enter principal,time rate"<<endl;
    cin>>p>>t>>r;
}
void Findinterest(){
i=p*t*r;
}
// display 
void display(){
cout<<"INTEREST  :"<<i<<endl;
}
};
// main function

int main(){
Interest i1;
i1.getdata();
i1.Findinterest();
i1.display();
return 0;
};