#include<iostream>
using namespace std;
int main (){
 char str[100];
 int freq[256]={0};
 cout <<"Enter string:";
 cin.getline(str,100);
 // frequency count
 for(int i=0;str[i]!='\0';i++){
    freq[str[i]]++;
 }
 //first non - repeating 
 for(int i=0;str[i]!='\0'; i++){
if(freq[str[i]]==1){
    cout<<"First non -repeating character:"<<str[i];
    return 0;

}
 }
 cout <<"No non - repeating character found";
 return 0;
 }   
