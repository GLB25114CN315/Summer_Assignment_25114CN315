#include<iostream>
using namespace std;

int main(){
    char str[200];
    int count =0;

    cout <<"Enter sentence:";
    cin.getline(str,200);

    for(int i=0;str[i]!='\0';i++){
        if((str[i]==' '&&str[i+1]!=' '&& str[i+1]!='\0')){
            count++;

        }

    }
    cout <<"Total words="<<count +1;
    return 0;
}