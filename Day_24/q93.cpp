#include<iostream>
using namespace std;
bool isrotation(string s1,string s2){
 if (s1.length()!=s2.length())
 return false;
 string temp=s1+s1;
 return (temp.find(s2)!=string::npos);
}
    int main(){
        string s1= "abcd",s2="cdab";

        if (isrotation(s1,s2))
        cout <<"rotation hai";
        else
        cout <<"rotation nahi hai";
        return 0;
    }
