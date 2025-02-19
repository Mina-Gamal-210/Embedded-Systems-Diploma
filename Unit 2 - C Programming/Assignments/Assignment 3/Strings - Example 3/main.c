// Reverse string

#include <stdio.h>
#include <string.h>


int main(void)
{

	int i = 0;
	char text[150];

	printf("Enter a String: ");
	fflush(stdin);
	fflush(stdout);
	gets(text);

	printf("Reverse String: ");

	for(i=strlen(text)-1;i>=0;i--)
	{
		printf("%c",text[i]);
	}


	return 0;


}
