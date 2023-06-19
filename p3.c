#include <stdio.h>
// Find Prime number
int main () {
    int n = 34;
    int isPrime = 1;
    for (int i = 2; i*n < n; i++)
    {
       if(n% i ==0){
        isPrime = 0;

       }
    }
    if (isPrime)
    {
       printf("The number %d is Prime\n",n);
    }
    else{
        printf("The number %d is notPrime\n",n);
    }
    return 0;
    
}