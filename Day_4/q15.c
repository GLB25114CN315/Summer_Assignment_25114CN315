#include<stdio.h>
int main(){
    int num, temp, remainder, result =0,digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0){
        temp /= 10;
        digits++;
    }
    temp = num;
    while(temp != 0){
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }
    if(result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);