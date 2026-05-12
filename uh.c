#include <stdio.h>
#include <string.h>



int main(){
	
	
	int age = 0;
	char fullname[20] = "";
	printf("What is your age?: ");
	scanf("%d", &age);
	
	getchar();
	printf("What is your full name?: ");
	fgets(fullname, 20, stdin);
	fullname[strlen(fullname) - 1] = '\0';
	
	printf("%s\n", fullname);
	printf("%d\n", age);
	
	
	

}
