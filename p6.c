#include<stdio.h>
int main(){

    // We know fibbonocci series is start from 0 and 1 ,So intialise this series 0 and 1 primary condition
    // This is good example if want to write a query
    int num ,i ,term1 = 0, term2 = 1, nextTerm;
    printf("Enter your favourite number");
    scanf("%d", &num);

    printf("Your Fibbonici series: ");

    for(i = 1; i<=num; i++){
    nextTerm  = term1 +term2;
    term1 = term2;

    }




}