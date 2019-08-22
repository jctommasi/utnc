/*
 ============================================================================
 Name        : scanf.c
 Author      : jc
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int pideSuma(int* suma);

int main(void)
{
	int suma;

	pideSuma(&suma);
	printf("la suma es %d",suma);
	return 0;
}

int pideSuma(int* suma)
{
	int num1;
	int num2;

	printf("ingrese el numero1:");
	scanf("%d",&num1);
	printf("ingrese el numero2:");
	scanf("%d",&num2);
	*suma = num1 + num2;
	return 0;
}
