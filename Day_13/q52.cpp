#include<iostream>
using namespace std;
int main(){
    int n,even=0,odd=0;
    cout<<"Enter size:";
    cin >>n;
    int arr[n];
    cout<<"Enter elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0)
            even++;
            else
            odd++;
        }