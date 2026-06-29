#include <iostream>
using namespace std;
int main (){
int a[]={1,3,5};
int b[]={2,4,6};
int n=3,m=3;
int c[10];
int i=0,j=0,k=0;
while(i<n&&j<m){
    if(a[i]<b[j])
    c[k++]=a[i++];
    else
    c[k++]=b[j++];
}

while(i<n)
c[k++]=a[i++];
while(j<m)
c[k++]=b[j++];
for(int x=0;x<k;x++)
cout<<c[x]<<" ";
return 0;

}