#include<iostream>
using namespace std;
int main(){
    int n, sum=0;
    cout<<"Enter size:";
    cin>> n;
    int arr[n];
    cout<<"Enter elements:\n";
    for (int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    float avg =(float)sum/n;
    cout << "sum="<<sum<<endl;
    cout << "average="<<avg;
    return 0;
}