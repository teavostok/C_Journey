// Q5: Reverse a number.
//This was hell...


#include <stdio.h>

int main(){
    
    int num, rem;
    int reverse = 0;
    printf("Enter a number that will be reversed: ");
    scanf("%d", &num);
    
    while(num != 0){
        
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num = num / 10;
    }
    
    printf("The reversed number is %d", reverse);
}
