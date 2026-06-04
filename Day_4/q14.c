#include<stdio.h>
int main(){
    int n, a=0,b=1,c;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    if(n==0)
    printf("0");
    else
    printf("%d",b);
    return 0;
}