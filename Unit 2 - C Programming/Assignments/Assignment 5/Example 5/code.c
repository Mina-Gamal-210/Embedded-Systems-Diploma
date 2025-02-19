/*Assignment 5*/

// Example 5: Calculating Area of circle using macros

#include <stdio.h>

#define pi 22.0/7

#define area(...) (pi*__VA_ARGS__*__VA_ARGS__)

int main(void)
{
	float radius;

	printf("Enter the Radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);

	printf("Area of circle = %g",area(radius));


	return 0;
}
