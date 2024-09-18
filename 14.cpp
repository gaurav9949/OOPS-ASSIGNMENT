// 14.Define a class Room with following specifications:
// a. Data Members
// i. length
// ii. width
// b. Member Functions
// i. getdata() to assign initial values
// ii. display () to display length and width
// iii. area () to find and display the area

#include<iostream>
using namespace std;
class room{
    private:
float lenght;
float width;
public:
 
 void getdata(){
cout<<"Enter the lenght and breadth"<<endl;
cin>>lenght>>width;
 }
void display(){
    cout<<"The lenghth is: " <<lenght<<endl;
    cout<< "and the breadth is: "<<width<<endl;
}
void area(){
    float a=0;
    a=lenght*width;
    cout<<"THE area is :"<<a<<endl;
}
};
int main(){
room r1;
r1.getdata();
r1.display();
r1.area();

    return 0;
}