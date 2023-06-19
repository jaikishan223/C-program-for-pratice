#include<stdio.h>
int main(){

    int num, i, isPrime = 1;
    printf("Enter a positive number:");
    scanf("%d", &num);

    for(i= 2; i<=num/2; i++){

        if(num % i == 0){
            isPrime = 0;
            break;
        }
    };

    if(isPrime == 1 ){
        printf("%d is a Prime number.\n", num);

    }else{
        printf("%d is not a Prime number.\n", num);
        
    }
    return 0;
}


