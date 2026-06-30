#include<iostream>
using namespace std;
int main(){
 int arr[100],n,choice;
 cout<<"enter size:";
 cin>>n;
 
 cout<<"enter elements:";
 for(int i=0;i<n;i++)cin>>arr[i];

 do{
    cout<<"\n1.display 2.sum 3.max 4.exit\n";
    cin>>choice;

    switch(choice){
        case 1:
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        break;
        case 2:{
            int sum=0;
            for(int i=0;i<n;i++)
            sum+=arr[i];
            cout<<"sum="<<sum;
            break;
        }
        case 3;{
            int max=arr[0];
            for(int i=1;i<n;i++)
            if(arr[i]>max)max=arr[i];
            cout<<"max="<< max;
            break;
        }
    }

 }while(choice!=4);
 return 0;
}