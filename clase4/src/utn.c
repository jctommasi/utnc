/*
 * utn.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */

#include <stdio.h>
#include <stdlib.h>

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
		__fpurge(stdin);
	} while (err != reintentos);

	return traceback;
}
