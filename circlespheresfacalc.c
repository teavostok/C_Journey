#include <stdio.h>
#include <math.h>

int main(){
	
	double r = 0.0;
	double c = 0.0;
	double A = 0.0;
	const double pi = 3.14;
	printf("What is the radius of the circle? ");
	scanf("%lf", &r);
	
	A = pi * (pow(r, 2));
	c = 2 * pi * r;
	
	printf("The circumference of the circle is: %.9lf\n", c);
	printf("The area of the circle is: %.9lf\n", A)	;
	
	
	
}
