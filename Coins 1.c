#include <stdio.h>
#include <stdlib.h>
int main()
{
	
	double item1W, item2X, item3Y, item4Z, itemTotal;
		printf("How many pennies do you have:\n");
			scanf_s("%lf", &item1W);
			printf("You entered %.1f\n", item1W);
		printf("how many nickels do you have:\n");
			scanf_s("%lf", &item2X);
			printf("You entered %.1f\n", item2X);
		printf("How many dimes do you have:\n");
			scanf_s("%lf", &item3Y);
			printf("You entered %.1f\n", item3Y);
		printf("How many quarters do you have:\n");
			scanf_s("%lf", &item4Z);
			printf("You entered %.1f\n", item4Z);
		itemTotal = item1W * .01 + item2X * .05 + item3Y * .1 + item4Z * .25;
			printf("You have $%.2f\n", itemTotal);


	system("pause");
}