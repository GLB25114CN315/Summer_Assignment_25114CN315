#include<iostream>
using namespace std;
int main (){
int n ;
cout << "Enter size:";
cin >> n;

int arr[n];
cout << "Enter elements:\n";
for(int i=0; i<n; i++){
    cin >> arr[i];
}
int index = 0;
for (int i=0;i<n;i++){
    if(arr[i]!=0){
        arr[index++]=arr[i];
    }
}
while(index<n){
    arr[index++]= 0;
}
cout << "After moving zeroes:\n";
for(int i=0; i<n; i++){
    cout << arr[i]<<" ";
}
return 0;
}



