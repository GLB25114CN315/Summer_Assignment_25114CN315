#include<iostream>
using namespace std;
struct student {
    int roll;
    char name[50];
    float marks;

};
int main(){
  student s[50];
  int n;
  
  cout <<"enter number of students:";
  cin >> n;
  for (int i=0;i<n;i++){
    cout<<"enter roll,name,marks:";
    cin>>s[i].roll>>s[i].name>>s[i].marks;
  }
  cout<<"\"\nrecords:\n";
  for(int i=0;i<n;i++){
    cout<<s[i].roll<<" "
    <<s[i].name<<" "
    <<s[i].marks<<endl;
  }
  return 0;
}