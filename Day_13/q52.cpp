#include<iostream>
using namespace std;
int main(){
    int n, even=0,odd=0;
    cout <<"enter size:";
    cin>> n;
    int arr[n];
    cout <<"enter elements:\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    cout <<"Even numbers: "<<even<<endl;
    cout <<"Odd numbers: "<<odd<<endl;
    return 0;
}