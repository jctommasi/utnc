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
#include "utn.h"

#define MSG_EDAD "Ingrese la edad: "
#define MSG_ERR "ERROR"

int main(void)
{
	int userNumber = 0;
	int min = 0;
	int max = 0;
	int reintentos = 0;


	printf("Ingrese el minimo: ");
	scanf("%d",&min);
	printf("Ingrese el maximo: ");
	scanf("%d",&max);
	printf("Ingrese el numero de reintentos: ");
	scanf("%d",&reintentos);

	if (getNumero(&userNumber, min, max, reintentos, MSG_EDAD, MSG_ERR) == 0)
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

