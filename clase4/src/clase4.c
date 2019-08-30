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

#define MSG_EDAD "Ingrese la edad: "
#define MSG_ERR "ERROR"

int getNumero(int* pUserNumber, int min, int max, int reintentos, char* pMsg, char* pMsgErr);

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

int getNumero(int* pUserNumber, int min, int max, int reintentos, char* pMsg, char* pMsgErr)
{
	int input;
	int err = 0;
	int traceback = 1;

	do
	{
		printf("%s", pMsg);
		scanf("%d",&input);
		if (input > max || input < min)
		{
			err = err + 1;
		}
		else
		{
			*pUserNumber = input;
			traceback = 0;
			break;
		}
	} while (err != reintentos);

	return traceback;
}
