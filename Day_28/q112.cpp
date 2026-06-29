#include<iostream>
using namespace std;
int main(){
 string name[3];
 long long phone[3];
 
 for (int i=0;i<3;i++){
    cout<<"Enter Name and Phone:";
    cin>>name[i]>>phone[i];

 }
 cout<<"\nContacts:\n";
 for(int i=0;i<3;i++){
    cout<<name[i]<<"-"<<phone[i]<<endl;
 }
 return 0;
}