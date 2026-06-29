#include <iostream>
using namespace std;
int main (){
 int balance=1000,choice,amount;
 
 do{
    cout<<"\n1.check Balance\n2.Deposit\n3.withdraw\n4.Exit\n";
    cout<<"Enter choice:";
    cin>>choice;

    switch(choice){
        case 1:
        cout<<"Balance:"<<balance;
        break;
        case 2:
        cout<<"Enter amount:";
        cin>>amount;
        balance += amount;
        break;
        case 3:
        cout<<"Enter amount:";
        cin>>amount;
        if(amount <=balance)
        balance-=amount;
        else
        cout<<"Insufficient balance";
        break;

    }

 }while(choice!=4);
 return 0;
}