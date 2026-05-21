//L3-Q3: LCM and HCF Calculator
//Switched to Arch and nuked my Windows and lost the Q3 file... ZED HAS NO COMPILE AND RUN BUTTON HELPPPPP!!!!!!!!!!!
//Ik, shouldn't have taken me 3 DAYS to complete this, but I was still setting up my Linux and also trying to add a "runc" command to ZED while also, trying to recover my windows password.
//These are my yap comments dated May 2026... This repo will prolly be lost in the thousands of repos on git never to be seen again, yet if anyone in the future is reading these. hello and You have a good day sir. :)

#include <stdio.h>
#include <stdbool.h>


int main(){

    int num1, num2;
    bool LCMfound = false; bool HCFfound = false;
    int currentmultiple = 1;
    int orignum1, orignum2;
    int remainder = 0;
    bool status = true;

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    if(num1 <= 0 || num2 <= 0){status = false;}

    if(num1 == num2 && status != false){
        printf("LCM and HCF are: %d", num1);
        LCMfound = true;
        HCFfound = true;
    }

    orignum1 = num1;
    orignum2 = num2;

    //LCM Calculation main loop
    while(LCMfound != true){
        if(status == false){break;}
        num1 = orignum1;
        num2 = orignum2;

        if(num1 > num2 && num1 != num2){

            num1 = num1 * currentmultiple;

            if(num1 % num2 == 0){

                printf("The LCM is: %d\n", num1);
                LCMfound = true;
            }
            else{
                currentmultiple++;
            }
        }
        else if(num2 > num1 && num1 != num2){

            num2 = num2 * currentmultiple;

            if(num2 % num1 == 0){

                printf("The LCM is: %d\n", num2);
                LCMfound = true;
            }
            else{
                currentmultiple++;
            }
        }

    }

    num1 = orignum1; num2 = orignum2;

    //HCF Calculator Main Loop
    while(HCFfound != true && status != false){
        int numcase; int temp1; int temp2;
        if(num1 < num2){numcase = 1;}
        else if(num2 < num1){numcase = 2;}
        else{numcase = 3;}

        if(numcase == 1){
            temp1 = num2 % num1;
            temp2 = orignum1 % num1;

            if(temp1 == 0 && temp2 == 0){
                printf("HCF found: %d", num1);
                break;
            }
            else if(temp1 != 0 || temp2 != 0){
                num1--;
                continue;
            }
        }
        else if(numcase == 2){
            temp1 = num1 % num2;
            temp2 = orignum2 % num2;
            if(temp1 == 0 && temp2 == 0){
                printf("HCF found: %d", num2);
                break;
            }
            else if(temp1 != 0 || temp2 != 0){
                num2--;
                continue;
            }
        }
        else if(numcase == 3){
            printf("You shouldn't be seeing this output.");
        }
    }

    if(status == false){
        printf("You entered a either a zero or a negetive number.");
    }
}

//Can't even commit this to the github as there is no light from the morning and no internet... Thank god I fixed Linux yesterday or I would have been doomed lmao.
