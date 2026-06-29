#include<iostream>
using namespace std;
int main(){
 string books[3]=("Math","Physics","Chemistry");
 int choice;
 
 cout<<"Available Books:\n";
 for(int i=0;i<3;i++){
    cout<<i+1<<". "<<books[i]<<endl;

 }
 cout<<"Enter book number to issue:";
 cin>>choice;
 if(choice>=1 && choice <=3)
 cout<<"You issued:"<< books[choice-1];
 else
 cout<<"Invalid choice";
 return 0;
}