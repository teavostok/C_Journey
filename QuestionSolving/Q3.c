//Q3: Check if the number is negetive/ positive or zero.

#include <stdio.h>

int main() {
    
    int num;
    
    printf("Enter a Number to check if its Positive/negetive/zero");
    scanf("%d", &num);
    
    if(num > 0){
        printf("The number is positive.");
    }
    else if(num < 0){
        printf("The number is Negetive");
    }
    else{
        printf("The Number is zero");
    }
    return 0;
}
