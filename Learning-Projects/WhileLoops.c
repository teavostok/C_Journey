#include <stdio.h>

int main() {
    int age = 0;

    while(age < 18) {
        printf("What is your age? ");
        scanf("%d", &age);
    }

    printf("Access granted.\n");

    return 0;
}