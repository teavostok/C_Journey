//L-3Q1: `Calculator using functions.
//Yes ik i didnt use lf and i can use it to make a better calculator but just deal with this cuz i am focusing on the logic more then the formalaties.

#include <stdio.h>


//function prototypes

int addition(int num1, int num2);
int multiplication(int num1, int num2);
int division(int num1, int num2);
int subtraction(int num1, int num2);



//Entry point
int main(){
    
    int num1, num2;
    char operator;
    int result;
    
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the operator(+, -, /, *): ");
    scanf(" %c", &operator);
    printf("Please enter the second number: ");
    scanf(" %d", &num2);
    
    
    
    if(operator == '+'){
        result = addition(num1, num2);
        printf("%d", result);
    }
    else if(operator == '-'){
        result = subtraction(num1, num2);
        printf("%d", result);
    }
    else if(operator == '*'){
        result = multiplication(num1, num2);
        printf("%d", result);
    }
    else if(operator == '/'){
        result = division(num1, num2);
        printf("%d", result);    
    }
    else{
        printf("Invalid operator");
    }
    
}



//operating funtions

int addition(int num1, int num2){
    
    int answer = num1 + num2;
    return answer;
    
}

int multiplication(int num1, int num2){
    
    int answer = num1 * num2;
    return answer;
    
}

int division(int num1, int num2){
    
    int answer = num1 / num2;
    return answer;
    
}

int subtraction(int num1, int num2){
    
    int answer = num1 - num2;
    return answer;
    
}
