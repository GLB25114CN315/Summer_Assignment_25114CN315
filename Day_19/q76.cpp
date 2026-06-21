#include<iostream>
using namespace std;
int main (){
    int n;
    cout <<"Enter size(square matrix):";
    cin>>n;

    int a[n][n];
    int sum =0;
    cout <<"Enter matrix:\n";
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    for(int i=0;i<n;i++)
    sum+=a[i][i]; //main diagonal

    cout <<"Diagonal sum ="<< sum;
    return 0;
}