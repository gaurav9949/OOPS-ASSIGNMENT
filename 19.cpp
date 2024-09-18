// 19.Define a class BankAccount with data members for the account number
// and balance. Implement member functions to deposit and withdraw
// money, defined outside the class using the scope resolution operator.
// Create an object and perform some transactions to demonstrate these
// functions.
#include<iostream>
using namespace std;
class BankAccount{
private:
int accountno;
double balance;
public:
void input(){
    cout<<"Enter the accno"<<endl;
    cin>>accountno;
    cout<<"Enter the inital balance"<<endl;
cin>>balance;
} 
void showinput(){
    cout<<"Account number is : "<<accountno<<endl;
    cout<<"Initial balance is : "<<balance<<endl;

}
//member function to for withdraw and deposit 
void deposit(double amount);
void withdraw(double amount);

void result(){
    cout<<"Account no :"<<accountno<<endl;
    cout<<"Final balance: "<<balance<<endl;
}



};
// implemt of member function outside of the class 
// by uisng scope resol opeator 
void BankAccount::deposit(double amount){
if(amount>0){
balance+=amount;
cout<<"Deposited NPR :"<<amount<<endl;
cout<<"Total money "<<balance<<endl;
}
else{
    cout<<"only postive amount is addded"<<endl;
}
}
// implement of withdrwan function outside of th class uisng scope resol operator 
void BankAccount::withdraw(double amount){
if(amount<=balance){

    balance -=amount;
    cout<<"Withdraw amount npr:"<<amount<<endl;
    cout<<"Total money "<<balance<<endl;
}
    else{
        cout<<"Insufficent balance"<<endl;
    }
}





int main(){
BankAccount b1;
b1.input();
b1.showinput();
double depositamount,withdrawamount;
cout<<"Enter the money you wanna deposit"<<endl;
cin>>depositamount;
b1.deposit(depositamount);
cout<<"Enter the money you wanna withdraw"<<endl;
cin>>withdrawamount;
b1.withdraw(withdrawamount);

b1.result();

    return 0;






}