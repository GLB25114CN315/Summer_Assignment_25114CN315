#include<iostream>
using namespace std;

int main(){
    char str[100];
    int i,len=0;
    bool ispalindrome= true;

    cout <<"Enter string:";
    cin.getline(str,100);

    while(str[len]!='\0') len++;

    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-1]){
            ispalindrome= false;
            break;
        }
    }
    if(ispalindrome)
    cout<<"Palindrome";
    else
    cout<<"Not palindrome";
    return 0;
}