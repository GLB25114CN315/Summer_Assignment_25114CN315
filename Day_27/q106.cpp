#include<iostream>
using namespace std;
struct Employee{
    int id;
    string name;
    float salary;

};
int main(){
    Employee e[3];
    for (int i=0;i<3;i++){
        cout<<"Enter ID,Name, Salary:";
        cin>> e[i].id>>e[i].name>>e[i].salary;
    }
    cout<<"\nEmployee Details:n";
    for(int i=0;i<3;i++){
        cout<<e[i].id<<" "<<e[i].name<<" "<<e[i].salary<<endl;

    }
    return 0;
}