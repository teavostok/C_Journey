//Q1L-2 : Prime Number Checker.





#include <stdio.h>

int main(){
    
    int number;
    int base = 2;
    int temp = 0;
    printf("Please enter the number to check if its prime: " );
    scanf("%d", &number);
    
    while(base < number){
        
        temp = number % base;
        
        if(temp == 0){
            printf("The number is not a Prime number. It can be divided by %d", base);
            break;
        }
        else{
            ++base;
            continue;
        }
    }
    printf("Search completed... %d is NOT a prime number", number);
}