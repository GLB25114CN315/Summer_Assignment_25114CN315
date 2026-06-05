#include <stdio.h>
int main(){
    int n, largest =0;
    printf("Enter a number:");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            largest = i;
            n/=i;
        }
    }
    printf("largest prime factor is %d", largest);
    return 0;
}