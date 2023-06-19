#include<stdio.h>
int main(){
    int num, i;
    unsigned long long factorial = 1;
    printf("Type a number:");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        // Shorthand notation for factorial = factorial * i
        factorial *= i; 
        
    };

    printf("%d = %llu\n", num,factorial);
    return 0;


}



