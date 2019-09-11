/*
 * func.h
 *
 *  Created on: 11 sep. 2019
 *      Author: alumno
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_

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


#endif /* GLOBAL_H_ */
