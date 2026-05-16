//Q2L-2: Armstrong Number Checker.
// Using my big brain to make the equations.

#include <math.h>
#include <stdio.h>

int main(){
    
    int number;
    int power = 0;
    int digit = 0;
    
    printf("Please enter a number to check if its an Armstrong Number: ");
    scanf("%d", &number);
    int orignalnum = number;
    int temp = number;
    
    //While loop 1 for get the amount of numbers
    while(number != 0){
         number = number / 10;
         power++;
    }
    
    //Debug print 
    printf("%d\n", power);
    
    //While loop 2 for the main logic.
    while(temp != 0){
        
        digit = digit + (int)pow((temp % 10), power);
        temp = temp / 10;
        
    }
    
    printf("%d\n", digit);
    
    if(digit == orignalnum){
        printf("The number is an Armstrong Number.");  
    }
    else{
        printf("The number isn't and Armstrong Number.'");
    }
    
    return 0;
}