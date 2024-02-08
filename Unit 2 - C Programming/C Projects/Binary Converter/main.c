#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "time.h"


void Missed_Bits(int number , int bits)
{
	int needed = ceil((float)log2(number));

	if(bits < needed )
		printf("\n\nnumbers of bits isn't sufficient to preview this number, you need at least %d bits\n\nThere are missed Bits = %d", needed,needed-bits);
}


int main(void)
{

	enum type {Decimal=1,Hexadecimal,Octal};
	enum decision {wrong,menu,exit};
	enum type choice;
	int c;
	int x;
	int i;
	int n;
	int b;
	char v;
	enum decision flag;
	menu:
	system("cls");
	printf("\t\t\t=====================================\n");
	printf("\t\t\t=          Binary Converter         =\n");
	printf("\t\t\t=====================================\n\n\n\n");
	printf(" Modes: \n");
	printf(" 1- Decimal to Binary\n");
	printf(" 2- Hexadecimal to Binary\n");
	printf(" 3- Octal to Binary\n");
	printf("\nEnter your Choice: ");
	fflush(stdout);
	scanf("%d",&c);
	choice = c;

	system("cls");

	switch(choice)
	{
	case Decimal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=     Decimal to Binary Converter   =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Decimal: ");
		fflush(stdout);
		scanf("%d",&x);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&n);
		printf("\n\nThe number %d in Binary is ",x);



		break;

	case Hexadecimal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=  Hexadecimal to Binary Converter  =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Hexadecimal: ");
		fflush(stdout);
		scanf("%X",&x);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&n);
		printf("\nThe number %X in Binary is ",x);

		break;


	case Octal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=     Octal to Binary Converter     =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Hexadecimal: ");
		fflush(stdout);
		scanf("%o",&x);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&n);
		printf("\nThe number %o in Binary is ",x);

		break;

	}


   int counter = 1;
   int spacing = n % 4;

   if(spacing == 0)
	   spacing = 4;

	for(i=n-1 ;i>=0; i--)
	{

		b = (x<<(n-1-i)) >> (n-1) & 1;

		if(b==1)
			printf("1");
		else
			printf("0");

		if(counter == spacing)
		{
			printf(" ");
			spacing+=4;
		}

		 counter++;


	}

	Missed_Bits(x,n);

	printf("\n\n\n\n\nEnter 'M' to go to the main menu and 'E' to exit: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&v);

	Decide:

	(v=='m'||v=='M')? (flag = menu) : (v=='e'||v=='E')?  (flag = exit) : (flag = wrong);

	if(flag == menu)
	{
		goto menu;
	}

	else if(flag == wrong)
	{
		goto wrong;
	}


	else
	{

		printf("\n\nExiting");
		for(i=0;i<=4;i++){
			printf(".");
			sleep(1);
		}

		system("cls");
		return 0;
	}



	wrong:

	printf("\nInvalid Choice!\nEnter m to go to the main menu and e to exit: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&v);

	goto Decide;


}
