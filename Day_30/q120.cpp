#include<iostream>
using namespace std;
int main(){
 int marks[5],total=0;
 cout<< "enter 5 subject marks:\n";
 for(int i=0;i<5;i++){
    cin>>marks[i];
    total +=marks[i];

 }  
 float avg =total/5.0;
 cout<<"total ="<<total<<endl;
 cout<<"avarage="<<avg <<endl;
 
 if(avg>=90)cout<<"Grade A";
 else if(avg >=75)cout<<"Grade b";
 else if (avg >=50)cout<<"Grade C";
 else cout<<"fail";
 return 0;
}