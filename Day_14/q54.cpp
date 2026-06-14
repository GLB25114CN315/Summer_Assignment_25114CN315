#include<iostream>
using namespace std;
int main(){
    int n, key, count=0;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element:";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key)
        count++;
    }
    cout<<"frequency="<<count;
    return 0;
}