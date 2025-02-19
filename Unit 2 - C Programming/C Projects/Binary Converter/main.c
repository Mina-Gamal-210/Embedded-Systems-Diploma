#include "stdio.h"
#include "stdlib.h"    // to use system("cls") function which clears the console
#include "math.h"     //  to use log2() function
#include "unistd.h"  //   to use sleep() function to add some delay between printing dots when Exiting


void Missed_Bits(int number , int bits)
{
	int Needed_Bits = ceil((float)log2(number));

	if(bits < Needed_Bits )
		printf("\n\nnumbers of bits isn't sufficient to preview this number, you need at least %d bits\n\nThere are missed Bits = %d", Needed_Bits,Needed_Bits-bits);
}


int main(void)
{

	enum Number_Type {Decimal=1,Hexadecimal,Octal};
	enum decision {wrong,menu,exit};

	enum Number_Type choice;
	int user_choice;
	int Number;
	int i;
	int Number_of_Bit;
	int Bit_value;
	char v;
	enum decision flag;


	menu:
	system("cls");  // Clear the screen
	printf("\t\t\t=====================================\n");
	printf("\t\t\t=          Binary Converter         =\n");
	printf("\t\t\t=====================================\n\n\n\n");
	printf(" Modes: \n\n");
	printf(" 1- Decimal to Binary\n");
	printf(" 2- Hexadecimal to Binary\n");
	printf(" 3- Octal to Binary\n");
	printf("\nEnter your Choice: ");
	fflush(stdout);
	scanf("%d",&user_choice);
	choice = user_choice;

	system("cls");

	switch(choice)
	{
	case Decimal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=     Decimal to Binary Converter   =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Decimal: ");
		fflush(stdout);
		scanf("%d",&Number);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&Number_of_Bit);
		printf("\n\nThe number %d in Binary is ",Number);
		break;

	case Hexadecimal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=  Hexadecimal to Binary Converter  =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Hexadecimal: ");
		fflush(stdout);
		scanf("%X",&Number);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&Number_of_Bit);
		printf("\nThe number %X in Binary is ",Number);
		break;


	case Octal:
		printf("\t\t\t=====================================\n");
		printf("\t\t\t=     Octal to Binary Converter     =\n");
		printf("\t\t\t=====================================\n\n\n\n");

		printf("Enter the number in Octal: ");
		fflush(stdout);
		scanf("%o",&Number);
		printf("\nEnter the number of bits: ");
		fflush(stdout);
		scanf("%d",&Number_of_Bit);
		printf("\nThe number %o in Binary is ",Number);
		break;

	}


	int counter = 1;
	int spacing = Number_of_Bit % 4;

	if(spacing == 0)
		spacing = 4;

	for(i=Number_of_Bit-1 ;i>=0; i--)
	{

		Bit_value = (Number<<(Number_of_Bit-1-i)) >> (Number_of_Bit-1) & 1;

		if(Bit_value==1)
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

	Missed_Bits(Number,Number_of_Bit);

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
		for(i=0;i<=2;i++){
			printf("..");
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
