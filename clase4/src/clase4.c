/*
 ============================================================================
 Name        : clase4.c
 Author      : jc
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getNumero(int* pUserNumber, int min,int max,int reintentos, int msg);

int main(void)
{
	int userNumber = 0;
	int msg = 0;
	int min = 0;
	int max = 0;
	int reintentos = 0;

	printf("Ingrese el minimo: ");
	scanf("%d",&min);
	printf("Ingrese el maximo: ");
	scanf("%d",&max);
	printf("Ingrese el numero de reintentos: ");
	scanf("%d",&reintentos);

	if (getNumero(&userNumber, min, max, reintentos, msg) == 0)
	{
		printf("El numero vàlido es: %d", userNumber);
	}
	else
	{
		if (userNumber == 0)
		{
			printf("Maximo de reintentos alcanzado");
		} else
		{
			printf("El numero vàlido es: %d, pero hubo errores..", userNumber);
		}
	}

}

int getNumero(int* pUserNumber, int min, int max, int reintentos, int msg)
{
	int input;
	int err = 0;
	do
	{
		printf("Ingrese un numero: ");
		scanf("%d",&input);
		if (input > max || input < min)
		{
			err = err + 1;
		} else
		{
			*pUserNumber = input;
			break;
		}
	} while (err != reintentos);
	if (err == 0)
	{
		return 0;
	} else return 1;
}
