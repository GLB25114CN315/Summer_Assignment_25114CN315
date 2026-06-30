#include<iostream>
using namespace std;
struct book{
    int id;
    char name[50];

};

int main(){
book b[50];
int n;
cout<<"enter number of books:";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"enterid and name:";
    cin>>b[i].id>>b[i].name;

}   
cout<<"\nbooks:\n";
for(int i=0;i<n; i++){
    cout <<b[i].id<<" "<<b[i].name<<endl;

} 
return 0;
}