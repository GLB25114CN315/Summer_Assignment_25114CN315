#include<iostream>
using namespace std;
int main(){
 int basic;
 float hra,da,total;
 cout<<"Enter Basic Salary:";
 cin >>basic;
 
 hra=basic*0.2;
 da=basic*0.1;
 total=basic+hra+da;
 cout<<"HRA:"<< hra << endl;
 cout<<"DA:"<<da<< endl;
 cout<<"Total Salary :"<<total <<endl;
 return 0;
}