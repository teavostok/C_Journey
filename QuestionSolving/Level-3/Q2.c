//L3-Q2: Print all the prime numbers from 2-100
// This was one of the projects that really made me use my brain more then the last 2 lessons. only 43 lines but the most logical yet(for me). PS: Dealing with messy code is hell so if writing the code for urself still keep it prettu. 2nd RESET THE VARIABLES!!!!!!
#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int start = 3;
    int current = 2;
    int temp = 0;
    bool stat = false;
    
    while(start != 100){     //Main Loop that handels the number
        current = 2;
        while(current < start){ //Loop that tests the current Number
            temp = 0;
            
            temp = start  % current;
            
            if(temp == 0 && start != current){ //Means that the number is not prime.
                 stat = true;
                 break;
            }
            else if(temp != 0){ //meaning the number is prime for the current digit
                current++;
                continue;
            }
            else if(temp == 0 && start == current){
                current++;
                continue;
            }
         }
        if(stat == true){
            stat = false;
            start++;
            continue;
        }
        else if(stat == false){
            printf("%d ", start);
            start++;
        }
    }
}