//Q3L-2 Palindrome Number Checker.

#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int number;
    printf("Please enter the number to see if it is  Palindrome Number: ");
    scanf("%d", &number);
    int orignalnum = number;

    int digit = 0;
    int idk = 0;
    
    while(number != 0){
        
        idk = number % 10;
        digit = digit * 10 + idk;
        number = number / 10;
        
    }
    
    if(digit == orignalnum){
        printf("The number %d is a Palindrome Number.", orignalnum);
    }
    else{
        printf("The number %d is NOT a Palindrome Number.", orignalnum);
    }
}