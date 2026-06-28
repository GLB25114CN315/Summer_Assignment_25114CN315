#include<iostream>
using namespace std;

int main(){
    char str[100],result[100];
    int j=0;

    cout<<"Enter string:";
    cin.getline(str,100);

    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            result[j++]=str[i];

        }
    }
    result[j]='\0';
    cout<<"Without spaces:"<< result;
    return 0;
}