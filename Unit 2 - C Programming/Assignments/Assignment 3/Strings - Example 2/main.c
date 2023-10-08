// Finding length of a string

#include <stdio.h>

int main(void)
{

	int i = 0;
	char text[150];

	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);


	while(text[i]!= '\0')
	{
		i++;
	}

	printf("Length of the string: %d",i);


	return 0;


}
