#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;
int main (){
 srand (time(0));
 int number=rand()%100+1;
 int guess;
 
 do{
    cout<<"Enter your guess(1-100):";
    cin >> guess;

    if(guess>number)
    cout<<"too high!\n";
    else if (guess<number)
    cout <<"Too low!\n";
    else
    cout<<"Correct!\n";

 }while(guess !=number);
 return 0;
}