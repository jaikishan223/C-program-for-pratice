#include<stdio.h>
#include<string.h>


int isPalindrome(char str[]){

    int start = 0;
    int end = strlen(str) - 1;

    while(start <end){
        if (str[start] != str[end]){
            return 0; // Not a Palindrome

        }

        start++;
        end--;
         
    }
    return 1; //Palindrome

}



int main(){

    char str[100];
    printf("Enter a string:");
    scanf("%s", str); // str not a int variable it is a array so not use & operator

     if (isPalindrome(str)){
        printf("%s is Palindrome.\n", str);
     }else{
        printf("%s is not Palindrome.\n", str);
     }
    return 0;
}