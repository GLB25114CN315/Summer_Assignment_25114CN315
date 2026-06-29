#include<iostream>
using namespace std;
struct student {
    int id;
    string name;
    int mark;
};


int main(){
    Student s[3];
    //Input
    for(int i=0;i<3;i++){
        cout<<"Enter ID, Name,Marks:";
        cin>>s[i].id>>s[i].name>>s[i].marks;
        }
        //Display
        cout<<"\nStudent Records:\n";
        for(int i=0;i<3;i++){
            cout << s[i].id<<" "<<s[i].name<<" "<<s[i].marks<<endl;
        }
        return 0;
}