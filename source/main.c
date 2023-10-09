#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, total;
	
	printf("Please provide me with the following informations, ");
	printf("and the program will show you the cost per day of driving to work.\n");

	printf("\nTotal miles driven per day: ");
	scanf("%f", &a);
	
	printf("\nCost per litre of gasoline: ");
	scanf("%f", &b);

	printf("\nAverage miles per litre: ");
	scanf("%f", &c);

	printf("\nParking fees per day: ");
	scanf("%f", &d);

	printf("\nTolls per day: ");
	scanf("%f", &e);

	total = (a / c)*b + d + e;

	printf("\nThe cost per day of driving to work is %.0f \n", total);

	return 0;


}