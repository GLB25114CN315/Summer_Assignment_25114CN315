#include <iostream>
using namespace std;
int main (){
 string s1="hello";
 string s2="world";
 
 for (int i=0;i<s1.length();i++){
for(int j=0;j<s2.length();j++){
    if(s1[i]==s2[j]){
        cout<<s1[i]<<" ";
        break;
    }
}
 }
 return 0;
}