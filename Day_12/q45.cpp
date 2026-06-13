#include<iostream>
using namespace std;
bool ispalindrome(int n)
{
    int original=n, rev=0;
    while(n>0){
        int digit=n%10;
        rev=rev*10+digit;
        n/=10;
    }
    return original==rev;
}
int main(){
    int n;
    cin>>n;
    if (ispalindrome(n))
        cout<<n<<" is a palindrome number";
    else
        cout<<n<<" is not a palindrome number";
return 0;
}