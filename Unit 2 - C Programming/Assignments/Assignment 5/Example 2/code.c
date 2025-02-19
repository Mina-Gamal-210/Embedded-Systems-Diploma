/*Assignment 5*/

// Example 2: Adding to Distances in feet-inch System

#include <stdio.h>


int main(void)
{

	struct distance
	{
		int feet;
		float inch;

	}D1,D2,sum;


	printf("Enter infrormaion for 1st Distance\n");
	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&D1.feet);

	printf("Enter Inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D1.inch);


	printf("\nEnter infrormaion for 2nd Distance\n");
	printf("Enter Feet: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&D2.feet);

	printf("Enter Inch: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&D2.inch);


	sum.feet = D1.feet + D2.feet;

	sum.inch = D1.inch + D2.inch;

	if(sum.inch >= 12)
	{
		int diff = (int)sum.inch % 12;
		int i = (int)sum.inch - diff;
		sum.feet += i/12;
		sum.inch = sum.inch - (int)sum.inch + diff;

	}

	printf("Sum of Distances = %d' %g\"",sum.feet,sum.inch);


	return 0;
}
