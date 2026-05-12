#include <stdio.h>
#include <math.h>

int main(){
	
	float firstnumber;
	float secondnumber;
	char operator;
	double answer;
	
	printf("What is the first number? ");
	scanf("%f", &firstnumber);
	
	getchar();
	printf("Logical operator?(+, -, *, /) ");
	scanf("%c", &operator);
	
	printf("What is the Second number? ");
	scanf("%f", &secondnumber);
	
	switch(operator){
		case '+':
			answer = firstnumber + secondnumber;
			break;
		case '-':
			answer = firstnumber - secondnumber;
			break;
		case '*':
			answer = firstnumber * secondnumber;
			break;
		case '/':
			answer = firstnumber / secondnumber;
			break;
		default:
			printf("\nWrong option.");
	}
	printf("%lf", answer);
	
	return 0;
}
