#include <stdio.h>
#include <stdbool.h>

int main(){
	
	char op = '\0';
	double num1 = 0.0;
	double num2 = 0.0;
	double result = 0.0;
	
	printf("Please enter the first number: ");
	scanf("%lf", &num1);
	
	getchar();
	printf("Please enter the operator(+, -, /, *): ");
	scanf("%c", &op);
	
	printf("Please enter the second number: ");
	scanf("%lf", &num2);
	
	switch(op){
		default:
			printf("Invalid Operator");
		case '+':
			result = num1 + num2;
			printf("%lf", result);
			break;
		case '-':
			result = num1 - num2;
			printf("%lf", result);
			break;
		case '*':
			result = num1 * num2;
			printf("%lf", result);
			break;
		case '/':
			if(num2 == 0){
				printf("You can divide by 0!");
				break;
			}
			else{
				result = num1 / num2;
			}
			printf("%lf", result);
			break;
	}
	
	
  	
  	
  	return 0;
}
