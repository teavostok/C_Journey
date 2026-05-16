// Q6: Count how many digits there are in a number.

#include <stdio.h>

int main(){
    
    int number;
    int digits = 0;
    printf("please enter a number: ");
    
    scanf("%d", &number);
    
    
    while(number != 0){
        
        number = number / 10;
        
        ++digits;
    
    }
    
    printf("%d", digits);
}