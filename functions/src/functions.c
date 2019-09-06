/*
 ============================================================================
 Name        : functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 funcion para minimo, maximo, promedio suma
 */


#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define QLY_INPUTS 5

int arrayCalcMin(int *pArray, int *pResultado, int lenght);
int arrayCalcMax(int *pArray, int *pResultado, int lenght);
int arrayCalcProm(int *pArray, int *pResultado, int lenght);
int arrayCalcSuma(int *pArray, int *pResultado, int lenght);

int orderIntArray(int *pArray, int limite);
int initArrayInt(int *pArray , int limite, int valor);
int printArrayInt(int *pArray , int limite);
int getArrayInt(	int *pArray,
					int limite,
					char *pMensaje,
					char *pMensajeError,
					int minimo,
					int maximo,
					int reintentos);

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos);

int main(void)
{
	int inputs[10];
	int userInputsNumber;
	//int resultado = 0;

	userInputsNumber = getArrayInt(inputs,10,"Ingrese un numero?\n","Error\n",0,200,2);
	printArrayInt(inputs,userInputsNumber);
	orderIntArray(inputs, userInputsNumber);
	printArrayInt(inputs,userInputsNumber);

	return EXIT_SUCCESS;
}

int arrayCalcMin(int *pArray, int *pResultado,int lenght)
{
	int traceback = -1;
	int i;
	int buffer = pArray[0];

	for (i = 1; i <= lenght; ++i)
	{
		if(pArray[i] < buffer)
		{
			buffer = pArray[i];
		}
	};

	*pResultado = buffer;
	traceback = 0;

	return traceback;
}
int arrayCalcMax(int *pArray, int *pResultado, int lenght)
{
	int traceback = -1;
	int i;
	int buffer = pArray[0];
	for (i = 1; i <= lenght; ++i)
	{
		if(pArray[i] > buffer)
		{
			buffer = pArray[i];
		}
	}
	traceback = 0;
	*pResultado = buffer;
	return traceback;
}
int arrayCalcProm(int *pArray, int *pResultado , int lenght)
{
	int traceback = -1;
	int i;
	int buffer = pArray[0];
	for (i = 1; i <= lenght; ++i)
	{

		buffer = buffer + pArray[i];

	}
	buffer = buffer / lenght;
	traceback = 0;
	*pResultado = buffer;
	return traceback;
}
int arrayCalcSuma(int *pArray, int *pResultado , int lenght)
{
	int traceback = -1;
	int i;
	int buffer = pArray[0];
	for (i = 1; i <= lenght; ++i)
	{
		buffer = buffer + pArray[i];
	}
	traceback = 0;
	*pResultado = buffer;
	return traceback;
}
int initArrayInt(int *pArray , int limite, int valor)
{
	int retorno = -1;
	int i;
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			pArray[i]=valor;
		}
		retorno = 0;
	}
	return retorno;
}

int printArrayInt(int *pArray , int limite)
{
	int retorno = -1;
	int i;
	printf("\nDEBUG\n");
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			printf("\n\t%i",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}

int getArrayInt(int *pArray,
				int limite,
				char *pMensaje,
				char *pMensajeError,
				int minimo,
				int maximo,
				int reintentos)
{
	int retorno = -1;
	int buffer;
	int i=0;
	char respuesta;
	printf("\nDEBUG\n");
	if(pArray != NULL && limite > 0)
	{
		do
		{

			if(	getInt(	&buffer,
						pMensaje,
						pMensajeError,
						minimo,
						maximo,
						reintentos) == 0)
			{
				pArray[i] = buffer;
				i++;
				if(i == limite)
				{
					break;
				}
			}

			printf("Continue? (y/n)? \n");
			__fpurge(stdin); // fflush(stdin)
			scanf("%c",&respuesta);
		}while(respuesta != 'n');
		retorno = i;
	}
	return retorno;
}

int getInt(	int *pResultado,
			char *pMensaje,
			char *pMensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = -1;
	int buffer;

	do
	{
		printf("%s",pMensaje);
		__fpurge(stdin);
		if(scanf("%d",&buffer)==1 && buffer >= minimo && buffer <= maximo)
		{
			*pResultado = buffer;
			retorno = 0;
			break;
		}
		printf("%s",pMensajeError);
		reintentos--;
	} while(reintentos >= 0);
	return retorno;
}

int orderIntArray(int *pArray, int limite)
{
	//sort = 1 ASCENDENT -- sort = 0 DESCENDENT
	int callback = -1;
	int i,a,j;

	if(pArray != NULL && limite > 0)
	{
        for (i = 0; i < limite; ++i)
        {
            for (j = i + 1; j < limite; ++j)
            {
                if (pArray[i] > pArray[j])
                {
                    a =  pArray[i];
                    pArray[i] = pArray[j];
                    pArray[j] = a;
                }
            }
        }
        callback = 0;
	}

	return callback;
}
