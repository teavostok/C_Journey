//Username and password, with 3 attempts max.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    char username[] = "teavostok1";
    int password = 12345;
    int attemptnumber = 0;
    char attemptusername[30];
    int attemptpassword = 0;
    
    while(attemptnumber != 3){
        
        printf("Please Enter the Username: ");
        scanf("%s", attemptusername);
        
        printf("Please Enter the password: ");
        scanf("%d", &attemptpassword);
        
        if(strcmp(attemptusername, username) == 0 && attemptpassword == password){
            printf("Logged in sucessfully! The key is 000" );
            break;
        }
        else{
            printf("Wrong username or password\n");
            
            attemptnumber++;
        }
        
    }
    
    
}