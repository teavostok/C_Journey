#include <stdio.h>
#include <string.h>

int main(){
	
	char item[20] = "";
	int amt = 0;
	float price = 0;
	float finalprice = 0;
	
	printf("What would you like to buy? ");
	fgets(item, 20, stdin);
	
	printf("What is the price of 1 item you would like to buy? ");
	scanf("%f", &price);
	
	printf("How many would you like? ");
	scanf("%d", &amt);
	
	finalprice = amt * price;
	
	printf("You have bought %s\n", item);
	printf("Your total price is %f", finalprice);
	
	
}
