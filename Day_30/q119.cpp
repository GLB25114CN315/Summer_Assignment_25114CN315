#include<iostream>
using namespace std;

struct emp{
    int id;
    char name[50];
    float salary;
};

int main(){
emp e[50];
int n;
cout<<"enter number of employees:";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enter id ,name,salary:";
    cin>>e[i].id>>e[i].name>>[i].salary;

}   
cout<<"\nemployees:\n";
for(int i=0;i<n;i++){
    cout<<e[i].id<<" "
    <<e[i].name<<" "
    <<e[i].salary<<endl;
} 
retrun 0;
}