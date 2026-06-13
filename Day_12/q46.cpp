#include<iostream>
using namespace std;
bool isarmstrong(int n)
{
    int original=n, sum=0;
    while(n>0){
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
    }
    return original==sum;
}
int main(){
    int n;
    cin>>n;
    if (isarmstrong(n))
        cout<<n<<" is an Armstrong number";
    else
        cout<<" is not an Armstrong number";
        return 0;
}