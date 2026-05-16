//Number Guessing Game.


#include <stdlib.h>
#include <stdio.h>

int main(){
    int rand_num = rand();
    int guess = 0;
    while(guess != rand_num){
        
        printf("What is your guess?: ");
        scanf("%d", &guess);
        
        if(guess > rand_num){
            printf("Go lower.\n");
        }
        else if(guess < rand_num){
            printf("Go Higher!\n");
        }
        else{
            printf("This is the number!");
            break;
        }
    
    }
    
    
    return 0;
}