/*
 * utn_GetInt.h
 *
 *  Created on: 13 abr. 2022
 *      Author: jonat
 */
#include <stdio.h>
#ifndef BIBLIOTECAFUNCIONES_H_
#define BIBLIOTECAFUNCIONES_H_
int utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos);
int utn_GetFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		float maximo, float minimo, int maximoDeReintentos);
int utn_Descuento(float n1, float descuento, float * resultado);
int utn_Recargo(float n1, float recargo, float * resultado);
int utn_Bitcoin(float n1, float bitcoin, float * resultado);
int utn_precioUnitario(float n1, float n2,float * resultado);
int utn_DiferenciaAerolineas(float n1, float n2 , float* resultado);


#endif /* BIBLIOTECAFUNCIONES_H_ */