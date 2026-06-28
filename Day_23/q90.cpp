#include<iostream>
using namespace std;
int main (){
char str[100];
int freq[256]={0};
cout <<"Enter string :";
cin.getline(str,100);

for(int i=0; str[i]!='\0';i++){
    freq[str[i]]++;

    if(freq[str[i]]==2){
        cout<<"First repeating character:"<<str[i];
        return 0;
    }
}
cout<<"No repeating character found";
return 0;
}