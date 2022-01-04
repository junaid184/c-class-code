#include<stdio.h>
#include<conio.h>
int main()
{
	int var = 20; //actual variable decleration
	int *ip; //store address of var
	
	ip=&var; // address of var
	
	printf("Address of var variable: %x\n", &var);
	
	printf("Address stored in ip variable: %x\n", ip);
	
	printf("value of *ip variable: %d\n", *ip);
	
	return 0;
}
