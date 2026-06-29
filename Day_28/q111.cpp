#include<iostream>
using namespace std;
int main(){
 int seats =5, book;
 cout<<"Available seats:"<<seats <<endl;
 cout<<"enter seats to book:";
 cin>>book;
 if(book<=seats){
    seats-=book;
    cout<<"Booking successful!\nRemaining seats:"<<seats;

 }  else {
    cout<<"Not enough seats";
 } 
 return 0;
}