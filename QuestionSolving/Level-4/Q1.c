//Joke level tbf shit powerscaling of these levels.
// L4-Q1: Quiz game.
//Okay! Before you read this code I had my 2 braincells work randomly at 3 times: 1st approach was-> QUestion -> logic -> next question -> more logic. EXTREMLY bad for large scale questions. 2nd-> use functions with the values stored inside of them. What this did was only make it cooler with the same amount of effort. 3rd -> 2 arrays 1 with the questions and 1 with the answers. Check what number the question is at in that array and then check the answer at the same position as the question in the answers array. If they match score++; if they dont score--; BINGO!

#include <time.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    char questions[3][100] = {
        "What is 2+2? "
        "What is 3 + 1? "
        "What is 6-3? "
    };
    int answers[] = {2,4,3};

    srand(time(NULL));

    int index = rand() % 3;
    printf("%s\n", questions[index]);
}
