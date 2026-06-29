#include <iostream>
using namespace std;
int main (){
 int score =0, ans;
 
 cout<<"Q1: 2+2=?\n1)3  2)4  3)5\n";
 cin >>ans;
 if(ans ==2) score++;

 cout <<"Q2:Capital of India?\n1)Delhi2)Mumbai 3)Kolkata\n";
 cin>> ans;
 if(ans == 1)score++;
 cout <<"Q3: 5*2=?\n1)10  2)12  3)8\n";
 cin>> ans;
 if(ans ==1) score++;

 cout<<"Your score:"<<score;
 return 0;
 
}