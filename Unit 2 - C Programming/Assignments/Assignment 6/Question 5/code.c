#include <stdio.h>

struct SEmp {
	char emp_name[30];
	int emp_id;

};

int main()
{
	struct SEmp emp1 = {"Alex",1002};    //emp1 is a struct SEmp
	struct SEmp emp2 = {"Mina Gamal",1003};  //emp2 is a struct SEmp

	struct SEmp* arr[10];      // arr is an array of 10 elements each is pointer to struct SEmp
	struct SEmp* (*p)[10];  // p is a pointer to array of 10 elements each is pointer to struct SEmp
	p = &arr;               // assigning p with the address of arr
	arr[0] = &emp1;   //assigning the first element of the arr with the address of emp1
	(*p)[1] = &emp2;  //assigning the second element of the arr with the address of emp2 indirectly using pointer to array

	printf("Data of emp1:\nname = %s \nID = %d\n", (*p)[0]-> emp_name,(*p)[0]-> emp_id);
	printf("\nData of emp2:\nname = %s \nID = %d\n", (*p)[1]-> emp_name,(*p)[1]-> emp_id);
	return 0;
}
