#include "stdio.h"
#include "string.h"

// Written by Mina Gamal
// c function to reverse words in string

void reverse(char str[], int start, int end)
{
	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

char * str_Reverse(char str[])
{
	int len = strlen(str);
	reverse(str, 0, len - 1);
	int start = 0, end = 0;
	while (end <= len)
	{
		if (str[end] == ' ' || str[end] == '\0')
		{
			reverse(str, start, end - 1);
			start = end + 1;
		}
		end++;
	}
	return str;
}

int main()
{
	char text[100];
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(text);
	printf("Reversed string: %s",str_Reverse(text));
	return 0;
}
