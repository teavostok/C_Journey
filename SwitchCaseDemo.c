#include <stdio.h>

int main(){
	int whatcase = 0;
	
	printf("What is the case number?: ");
	scanf("%d", &whatcase);
	
	switch(whatcase){
		case 1:
			printf("Case File 22");
			break;
		case 2:
			printf("Case File 293");
			break;
		case 3:
			printf("Case file 82");
			break;
		case 4:
			printf("Case file 38");
			break;
		default:
			printf("Please only enter a num 1-4");
			break;
			
	}
	return 0;
}
