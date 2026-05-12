
#include <stdio.h>
#include <string.h>

void happybirthday(char name[], int age){

    printf("Happy birthday %s you are now %d years old!", name, age);
}

int main(){

    char name[50];
    int age = 0;

    printf("What is your name?: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    happybirthday(name, age);

    return 0;
}
