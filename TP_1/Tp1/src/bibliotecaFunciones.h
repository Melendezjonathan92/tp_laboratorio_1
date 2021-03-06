/*
 * utn_GetInt.h
 *
 *  Created on: 13 abr. 2022
 *      Author: jonat
 */
#include <stdio.h>
#ifndef BIBLIOTECAFUNCIONES_H_
#define BIBLIOTECAFUNCIONES_H_


/// @brief Esta funcion muestra el ingreso de un numero para su uso en el MENU con el texto del menu, y si se ingresa algo
/// erroneo, arroja el mensaje de error. Tambien el minimo y maximo de numeros que puede ingresar asi como sus reintentos.
///
/// @param pNumeroIngresado Se aloja el numero que va a ser usado para el menu
/// @param mensaje Aca complete el texto del menu para evitar usar varios printf
/// @param mensajeError el mensaje que va a devolver cuando el usuario ingrese un dato incorrecto.
/// @param maximo dentro del menu es el maximo numero que puede ingresar
/// @param minimo dentro del menu es el minimo numero que puede ingresar
/// @param maximoDeReintentos La cantidad de reintentos que va a tener el usuario.
/// @return retorna 0
int utn_GetInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos);

/// @brief Esta funcion muestra el ingreso de un numero para su uso en  el SUBMENU con el texto del submenu, y si se ingresa algo
/// erroneo, arroja el mensaje de error. Tambien el minimo y maximo de numeros que puede ingresar asi como sus reintentos.
///
/// @param pNumeroIngresado Se aloja el numero que va a ser usado para el  sub menu
/// @param mensaje Aca complete el texto del submenu para evitar usar varios printf
/// @param mensajeError el mensaje que va a devolver cuando el usuario ingrese un dato incorrecto.
/// @param maximo  dentro del submenu es el maximo numero que puede ingresar
/// @param minimo dentro del submenu es el minimo numero que puede ingresar
/// @param maximoDeReintentos La cantidad de reintentos que va a tener el usuario.
/// @return
int utn_GetFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		float maximo, float minimo, int maximoDeReintentos);
/// @brief En esta funcion se va a realizar el calculo para mostrar el precio del vuelo con el descuento del 10%.
///
/// @param n1 el numero que va a sufrir el descuento;
/// @param descuento el descuento que se le va a aplicar,
/// @param resultado el valor del viaje con el descuento
/// @return retorna 0
int utn_Descuento(float n1, float descuento, float * resultado);
/// @brief En esta funcion se realiza el aumento que tiene con tarjeta de credito.En el aumento se utilizo el #DEFINE para poder cambiar
/// en el futuro
///
/// @param n1 el numero donde se aplica el recargo
/// @param recargo es la cantidad de aumento que va a tener
/// @param resultado el valor del viaje con aumento
/// @return retorna 0
int utn_Recargo(float n1, float recargo, float * resultado);
/// @brief En esta funcion se va a calcular el precio del vuelo con la criptomoneda Bitcoin.Tambien se uso un DEFINE ya que su valor es
/// claramente cambiante.
///
/// @param n1	el numero del valor del vuelo
/// @param bitcoin el valor del bitcoin
/// @param resultado el precio del vuelo pero en la moneda Bitcoin
/// @return retorna 0
int utn_Bitcoin(float n1, float bitcoin, float * resultado);
/// @brief Se calcula el valor de unitario.
///
/// @param n1 precio que ingresa el usuario
/// @param n2 kiometros que ingresa el usuario
/// @param resultado el valor unitario del kilometro
/// @return retorna 0
int utn_precioUnitario(float n1, float n2,float * resultado);
/// @brief En esta funcion se calcula la diferencia entre precios de Aerolinas y Latam.
///
/// @param n1 precio de Aerolineas
/// @param n2 precio de Latam
/// @param resultado la diferencia entre ambos precios
/// @return retorna 0
int utn_DiferenciaAerolineas(float n1, float n2 , float* resultado);


#endif /* BIBLIOTECAFUNCIONES_H_ */
