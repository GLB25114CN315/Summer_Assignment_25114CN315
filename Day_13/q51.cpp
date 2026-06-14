#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0],min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"largest="<<max<<endl;
    cout<<"smallest="<<min;
    return 0;
}  