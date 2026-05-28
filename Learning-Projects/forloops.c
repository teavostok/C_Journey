#include <stdio.h>
#include <unistd.h> 

int main(){

    //for loop = Repeat a code a limited nuumber of times -> for(Initialization; Condition; Update)

    for(int i = 10; i > 0; i--){
        sleep(1);
        printf("%d", i);
    }
    printf("Happy New Year!");

}

