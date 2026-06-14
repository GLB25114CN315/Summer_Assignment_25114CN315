#include<iostream>
using namespace std;
int main(){
    int n, key, found=0;
    cout<<"Enter size:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key to search:";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"key found at index "<<i;
            found=1;
            break;
        }
    }
    if(!found)
        cout<<"key not found";
    }