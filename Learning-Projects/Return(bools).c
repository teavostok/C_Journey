#include <stdio.h>
#include <stdbool.h>

bool agecheck(int age){

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int age = agecheck(12);

    if(age == true){
        printf("You are an Adult");
    }
    else{
        printf("You are not an Adult!");
    }


    return 0;
}