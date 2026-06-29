#include <iostream>
using namespace std;
int main (){
 string s= "I love programming very much";
 string word="",longest ="";
 
 for (int i=0;i<=s.length();i++){
    if(s[i]!=' '&&i<s.length()){
        word +=s[i];

    }else{
        if(word.length()>longest.length()){
            longest =word;
        }
        word="";

    }
 }
 cout <<"longest word:"<<longest;
 return 0;

}