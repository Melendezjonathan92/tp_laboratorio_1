/*
 * utn_GetInt.c
 *
 *  Created on: 13 abr. 2022
 *      Author: jonat
 */
#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaFunciones.h"

int utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos){

	int auxNumeroIngresado;
	int retorno= -1;


	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);

	}
	return retorno;
}
int utn_GetFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		float maximo, float minimo, int maximoDeReintentos)
{
	int auxNumeroIngresado;
	int retorno= -1;


	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);

	}
	return retorno;

}
int utn_Descuento(float n1, float descuento, float * resultado){
	*resultado=n1-(n1/100 * descuento);
	return 0;
}
int utn_Recargo(float n1, float recargo, float * resultado){
	*resultado=n1+(n1*recargo/100);
	return 0;
}
int utn_Bitcoin(float n1, float bitcoin, float * resultado){
	*resultado =n1/bitcoin;
	return 0;
}
int utn_precioUnitario(float n1, float n2,float * resultado)
{
	*resultado=(n1/*precio*/ / n2/*km*/  );
	return 0;
}
int utn_DiferenciaAerolineas(float n1, float n2 , float* resultado)
{
	float auxResultado;

	auxResultado=(n1 - n2);
	if(auxResultado<0)
	{
		*resultado=auxResultado*-1;
	}else{
		*resultado=auxResultado;
	}

	return 0;
}
