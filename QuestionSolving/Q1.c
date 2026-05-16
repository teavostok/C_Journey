//Q1: Take an integer from the user and print whether it is even or odd.


#include <stdio.h>

int main(){
    
    int num = 0;
    printf("Enter a number to check wether even or odd.");
    
    scanf("%d", &num);
    int result = num % 2;
    if(result == 0){
        printf("The number %d is even", num);
    }
    else{
        printf("The number %d is odd", num);
    }

}

