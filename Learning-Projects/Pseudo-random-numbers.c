//Number Guessing Game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    int RandNum; 
    int numfound = false;

    srand(time(NULL));

    int min = 1;
    int max = 100;
    

    
    RandNum = (rand() % (max - min + 1)) + min;

    while(numfound != true){
        int Guess = 0;
        printf("Guess: ");
        scanf("%d", &Guess);
        
        
        if(Guess < RandNum){
            printf("Higher!\n");
        }
        else if(Guess > RandNum){
            printf("Lower!\n");
        }
        else{
            numfound = true;
        }
    }

    printf("Correct.");
    
}