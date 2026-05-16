// Sum of digits of the given number 

#include <stdio.h>

int main(){
    
    int number, digit;
    int sum = 0;
    printf("What is the number?: ");
    scanf("%d", &number);
    
    while(number != 0){
        
        digit = number % 10;
        sum = sum + digit;
        number = number / 10;
        
    }
    
    printf("%d", sum);
    
}