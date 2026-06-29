#include <iostream>
using namespace std;
int main (){
 string s="programming";
 string result ="";
 for (int i=0;i<s.length();i++){
    bool found =false;
    for (int j=0;j<result.length();j++){
        if(s[i]==result[j]){
            found =true;
            break;
        }
    }
    if(!found)
    result +=s[i];

 }  
 cout <<"After removing duplicates:"<<result;
 return 0; 
}