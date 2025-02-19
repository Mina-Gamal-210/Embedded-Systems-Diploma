/*Assignment 5*/

// Example 1: Creating A structure , scanning and previewing it

#include <stdio.h>


int main(void)
{

	struct student
	{
		char name[50];
		int roll;
		float mark;

	}s;

	printf("\nEnter information of students: \n\n");

	printf("Enter name: ");
	fflush(stdout);fflush(stdin);
	scanf("\n%[^\n]%*c",s.name);     // it is similar to gets();

	printf("Enter roll number: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&s.roll);

	printf("Enter marks: ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&s.mark);

	printf("\nDisplaying information\n\n");

	printf("Name: %s",s.name);
	printf("\nRoll: %d",s.roll);
	printf("\nMarks: %g",s.mark);

	return 0;
}
