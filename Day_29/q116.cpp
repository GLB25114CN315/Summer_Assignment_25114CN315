#include<iostream>
using namespace std;
struct Item{
    int id,qty;
    float price;
};
  int main(){
    Item items[100];
    int n;

    cout<<"enter number of item:";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"enter id,qty,price:";
        cin >>items[i].id>>items[i].qty>>item[i].price;

    }
    cout<<"\nInventory:\n";
    for(int i=0;i<n;i++){
        cout<<items[i].id<<" "
        <<items[i].qty<<" "
        <<item[i].price<<endl;
    }
    return 0;
  }  
