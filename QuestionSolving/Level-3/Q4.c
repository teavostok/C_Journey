//L4-Q3: Power system without using pow.

#include <stdio.h>

int main(){
    int num; int power;
    int answer;

    printf("Please enter the number: ");
    scanf("%d", &num);
    printf("Please enter the power: ");
    scanf("%d", &power);

    int orignum = num;
    int i = 0;
    while(i != power){
        answer = num * orignum;
        num = answer;
        i++;
    }

    printf("%d", answer);
}
