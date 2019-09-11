/*
 * func.h
 *
 *  Created on: 11 sep. 2019
 *      Author: alumno
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_
#define QLY_INPUTS 5
#define EXIT_SUCCESS 0

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

int sortDb(	int *pLegajo,
			char *pSexo,
			int *pEdad,
			int *nota1p,
			int *nota2p,
			float *promedio,
			int *limite);

int printDbEntry(	int legajo,
					char sexo,
					int edad,
					int nota1p,
					int nota2p,
					float promedio);

int listDb(	int *pLegajo,
			char *pSexo,
			int *pEdad,
			int *nota1p,
			int *nota2p,
			float *promedio,
			int *limite);

int addDbEntry(int legajo,char sexo,int edad,int nota1p,int nota2p,float promedio);

#endif /* GLOBAL_H_ */
