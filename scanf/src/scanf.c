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

int main(void) {
	int num1;
	int num2;

	printf("ingrese el numero1:");
	scanf("%d",&num1);
	printf("ingrese el numero2:");
	scanf("%d",&num2);

	int suma = num1 + num2;

	printf("la suma es %d",suma);

	return 0;
}
