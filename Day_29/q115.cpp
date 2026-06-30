#include<iostream>
#include <cstring>
using namespace std;
int main(){


char str[100];
int choice;
cout <<"enter string:";
cin>>str;

do{
    cout <<"\n1.length 2.reverse 3.uppercase 4.exit\n";
    cin >>choice;
    switch(choice){
        case 1;
        cout<<"length ="<< strlen(str);
        break;
        case 2:
        strrev(str);
        cout <<"reverse="<<str;
        break;
        case 3:
        for(int i=0;str[i];i++)
        str[i]=toupper(str[i]);
        cout<<str;
        break;
    }
}while(choice!=4);
return 0;
    
}