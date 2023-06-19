#include <stdio.h>
// sum of first n number
int main(){
    int n , sum;
    printf("type your favourite last number\n");
    scanf("%d",&n);
    sum = (n*n + n)/2;
    printf("sum of first %d numbers is: %d\n",n,sum);
    return 0;
}