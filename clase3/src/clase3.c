/*
 ============================================================================
 Name        : clase3.c
 Author      : jc
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cantDatos;
	int minimo;
	int maximo;
	int input;
	int i;

	printf("Ingrese cantidad de numeros a ingresar: ");
	scanf("%d",&cantDatos);

	printf("Ingrese el dato numero 1: ");
	scanf("%d", &minimo);
	maximo = minimo;

	for (i = 2; i <= cantDatos; i = i + 1)
	{
		printf("Ingrese el dato numero %d: ", i);
		scanf("%d",&input);
		if (input > maximo)
		{
			maximo = input;
		};
		if (input < minimo)
		{
			minimo = input;
		};
	};

	printf("El minimo es: %d \n", minimo);
	printf("El maximo es: %d \n", maximo);
}
