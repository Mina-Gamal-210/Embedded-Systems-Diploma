/*Assignment 5*/

// Example 4: Store information of students using Structures and Arrays

#include <stdio.h>
#include <conio.h>


struct student
{
	char name[50];
	int roll;
	float mark;

}s[10];



int main(void)
{
	printf("\nEnter information of students: \n");

	int i;
   char c;

	for(i=0;i<=9;i++)
	{
		printf("\nFor roll number: ");
		fflush(stdin);fflush(stdout);
		scanf("%d",&s[i].roll);

		printf("Enter name: ");
		fflush(stdin);fflush(stdout);
		gets(s[i].name);

		printf("Enter marks: ");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].mark);

		printf("\nEnter y to continue: ");
		fflush(stdin);fflush(stdout);
		c = getchar();
		if( c == 'y'|| c == 'Y')
		{}

		else
			break;

	}

	int j = i;


	printf("\nDisplaying information of students: \n");


	for(i=0;i<=j;i++)
	{
		printf("\nInformation for roll number %d: ",s[i].roll);

		printf("\nName: %s",s[i].name);

		printf("\nMarks: %g\n",s[i].mark);

	}


	return 0;
}
