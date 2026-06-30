#include<iostream>
using namespace std;
int main(){
 int choice;
 float a,b;
 do{
    cout<<"\n1.add 2.substract 3.multiply4.divide 5.exit\n";
    cin >>choice;

    if(choice >=1&& choice<=4){
        cout <<"enter two numbers:";
        cin>>a>>b;
    }
    switch(choice){
        case 1: cout<<"result ="<<a+b;
        break;
        case 2: cout<<"result="<<a-b;
        break;
        case 3: cout <<"result="<<a*b;
        break;
        case 4: cout<<"result="<<a/b;
        break;
        case 5;cout<<"exit";break;defaut:cout<<"invalid";

    }
 }   while(choice !=5);
 return 0;
}