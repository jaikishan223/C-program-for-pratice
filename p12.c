#include<stdio.h>
#include<stdbool.h>
// here we write code for Largest prime palindrome less than perticuler numbers
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for(int i = 2; i * i <= n ; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

bool isPalindrome(int n) {
    int reverse = 0;
    int original = n;

    while (n > 0) {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    return original == reverse;
}


int main() {
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    int largestPrimePalindrome = 0;

    for (int i = 2; i < N; i++) {
        if (isPrime(i) && isPalindrome(i)){
            largestPrimePalindrome = i;
        }
    }

    printf("Largest prime palindrome less than %d: %d\n", N, largestPrimePalindrome);

    return 0;
}

