#include<iostream>
using namespace std;
bool isperfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}
int main(){
    int n;
    cin>>n;
    if (isperfect(n))
        cout<<"perfectnumber";
    else
    cout<<"not perfect number";
    return 0;
}