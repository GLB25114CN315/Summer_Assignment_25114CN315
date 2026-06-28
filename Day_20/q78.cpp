#include<iostream>
using namespace std;
int main(){
    int a[10][10],n;
    bool issymmetric=true;
    cout <<"Enter size of square matrix:";
    cin >> n;
    cout <<"Enter matrix:\n";
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>a[i][j];

    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]!=a[j][i]){
                issymmetric=false;
                break;
            }
        }
    }
    if(issymmetric)
    cout<<"Matrix is symmetric";
    else
    cout <<"Matrix is not symmetric";
    return 0;
}