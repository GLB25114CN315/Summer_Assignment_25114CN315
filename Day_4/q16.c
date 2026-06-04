#include <stdio.h>
#include<math.h>
int main(){
    int start, end;
    printf("Enter range:");
    scanf("%d %d",&start,&end);
    for(int num=start; num<=end; num++){
        int temp = num, remainder, result = 0, digits = 0;
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
            printf("%d ", num);
    }