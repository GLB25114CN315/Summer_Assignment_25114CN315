#include<iostream>
#include <cstring>
using namespace std;
int main(){
char str1[100],str2[100];
int freq[256]={0};

cout <<"Enter first string:";
cin.getline(str1,100);

cout <<"Enter second string :";
cin.getline(str2,100);

//length check
if(strlen(str1)!=strlen(str2)){
    cout << "Not anagram";
    return 0;
}
for (int i=0;str1[i]!= '\0';i++){
    freq[str1[i]]++;
    freq[str2[i]]--;
}
for(int i=0;i<256;i++){
    if(freq[i]!=0){
        cout << "Not Anagram";
        return 0;
    }
}
cout <<"Anagram";
return 0;
}

