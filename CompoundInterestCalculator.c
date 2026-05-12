//Compound interest calclulator.

#include <stdio.h>
#include <math.h>

int main(){
	float P = 0.0;
	float r = 0.0;
	int t = 0;
	int n = 0;
	float A = 0.0;
	
	printf("Please enter the principal amount: ");
	scanf("%f", &P);
	printf("Please enter the rate: ");
	scanf("%f", &r);
	printf("Plrease enter the time: ");
	scanf("%d", &t);
	printf("Please enter the times compounded(n): ");
	scanf("%d", &n);
	
	r = r/100;
	
	A = P * pow((1 + (r / n)), (n * t));
	
	printf("%f", A);
	
	return 0;

}

