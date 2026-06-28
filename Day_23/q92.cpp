#include<iostream>
using namespace std;
int main(){
 char str [100];
 int freq[256]={0};
 
 cout <<"Enter string :";
 cin.getline(str,100);

 for(int i=0;str[i]!='\0'; i++){
    freq[str[i]]++;

 }
 int maxFreq=0;
 char maxchar;

 for (int i=0;i<256;i++){
    if(freq[i]>maxFreq){
        maxFreq=freq[i];
        maxchar=char(i);
    
    }
 }
 cout<<"Maximum occuring character:"<<maxchar;
 return 0;

}