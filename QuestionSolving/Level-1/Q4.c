//Q4: Find factorial using a loop.


#include <stdio.h>

int main(){
    
    int num;
    int factorial = 1;
    
    printf("Enter your number: ");
    scanf( "%d", &num);
    
    int factnum1 = num;
    
    while(factnum1 != 0){
        
        factorial = factorial  * factnum1;
        
        factnum1--;
    }
    
    printf("The factorial of %d is %d", num, factorial);
    
    return 0;
}
