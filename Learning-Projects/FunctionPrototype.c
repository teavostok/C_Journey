#include <stdio.h>
#include <stdbool.h>

void test(char artist[], int year); //function prototype: This defines the fucntion before. We need it because C is read from top to bottom so we have to define a function before using it. Helps the code be more organised.


int main(){

    test("The Weeknd", 2023);

    return 0;

}

void test(char artist[],int year){
    
    printf("I have been listening to %s since %d.", artist, year);

}