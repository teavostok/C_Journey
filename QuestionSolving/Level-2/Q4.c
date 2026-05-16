//Print the first n digits of the Fibonacci Series.
//idek how I did it but if it works i am not going to touch it.


#include <stdio.h>

int main(){
    
    int ini1, ini2, n;
    int next = 0;
    
    int currentn = 0;
    printf("What is the 1st number of the series: ");
    scanf("%d", &ini1);
    printf("What is the 2st number of the series: ");
    scanf("%d", &ini2);
    printf("How long should the series be?: ");
    scanf("%d", &n);
    printf("%d", ini1);
    
     while(n != currentn){
         
         
         printf("%d", ini2);
         next = ini1 + ini2;
         ini1 = ini2;
         ini2 = next;
         currentn++;
         
     }
}