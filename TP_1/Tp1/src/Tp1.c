#include <stdio.h>
#include <stdlib.h>

#include "bibliotecaFunciones.h"
#define DESCUENTO 10
#define INTERES 25
#define BITCOIN 4507975.42

//flot des cuent reg div

int main() {
	setbuf(stdout, NULL);
//	char seguir='s';
	float kilometros;
	float precioAerolineas;
	float precioLatam;
	float precioAerolineasBitcoin;
	float precioLatamBitcoin;
	int opcion;
	int opcionAerolineaLatam;
	int validacionRetorno;
//	float precioBitcoin=4507975.42;
//	int descuento=10;
//	int interes=25;
	float descuentoAerolineas;
	float descuentoLatam;
	float recargoAerolineas;
	float recargoLatam;
	float precioUnitarioAerolineas;
	float precioUnitarioLatam;
	float resultadoDiferencia;
	int seIngresaronKilometros=0;//bandera
	int seIngresaronPrecios=0;//bandera
	int seRealizoElCalculo=0;
	float latamForzado=159339;
	float aerolineasForzado=162965;
	float kilometrosForzado=7090;

//funcion dentro del switch
	do{
		validacionRetorno=utn_GetInt(&opcion,"Seleccione una opcion \n\n1-Ingrese kilometros\n2-ingrese precio aerolineas\n3-Realizar los calculos\n4-Mostrar resultados\n5-Carga forzada.\n6-Salida\n","No es una opcion valida.\n",6, 1, 2);
		if(validacionRetorno == 0){
			switch(opcion)
	{
		case 1:
			validacionRetorno=utn_GetFloat(&kilometros,"Ingrese los kilometros : ","kilometros invalidos\n",
					15000,0, 3);
					if(validacionRetorno == 0){
					printf("%.2f KM\n", kilometros);
									}else{
										printf("Los kilometros no fueron ingresados correctamente\n");}
					seIngresaronKilometros=1;
			break;
		case 2:
			if(seIngresaronKilometros==1){
					validacionRetorno=utn_GetInt(&opcionAerolineaLatam,"Seleccione una opcion \n\n1-Ingrese precio para Aerolineas\n2-ingrese precio Latam \n3-volver,","No es una opcion valida.\n",3, 1, 2);
			if(validacionRetorno==0)
			{
				switch(opcionAerolineaLatam)
							{
							case 1:
								validacionRetorno=utn_GetFloat(&precioAerolineas,"Ingrese el precio Aerolineas \n : ","Valor invalido\n",
													15000,1, 2);
								if(validacionRetorno==0)
								{
									printf("Precio Aerolineas %2.f  $\n", precioAerolineas);
								}else{
									printf("Ingrese un valor adecuado");
								}
								break;

							case 2:
								validacionRetorno=utn_GetFloat(&precioLatam,"Ingrese el precio para Latam \n: ","valor invalido\n",
													15000,0, 3);
								if(validacionRetorno==0)
								{
									printf("Precio Latam: %2.f  $\n", precioLatam);
								}else{
									printf("Ingrese un valor adecuado");
								}
								break;
							}


			}
			seIngresaronPrecios=1;
			}else{
				printf("No puede ingresar precios sin poner los kilometros.\n");

			}


			break;


		case 3:
			if(seIngresaronPrecios==1)
			{
			utn_Descuento(precioAerolineas, DESCUENTO, & descuentoAerolineas);
			utn_Descuento(precioLatam, DESCUENTO, & descuentoLatam);
			utn_Recargo(precioAerolineas, INTERES, &recargoAerolineas);
			utn_Recargo(precioLatam, INTERES, &recargoLatam);
			utn_Bitcoin(precioAerolineas, BITCOIN, &precioAerolineasBitcoin);
			utn_Bitcoin(precioLatam, BITCOIN, &precioLatamBitcoin);
			utn_precioUnitario(precioAerolineas, kilometros, &precioUnitarioAerolineas);
			utn_precioUnitario(precioLatam, kilometros, &precioUnitarioLatam);
			utn_DiferenciaAerolineas(precioLatam, precioAerolineas , &resultadoDiferencia);
			seRealizoElCalculo=1;
			printf("Se realizaron los calculos\n");
			}else{
				printf("Debe ingresar los valores para poder realizar los calculos \n");
			}


			break;

		case 4:
				if(seRealizoElCalculo)
				{
					printf("los kilometros ingresados son %.2f Km.",kilometros);
					printf("Latam\n\n");
					printf("El precio del vuelo con Latam es %.2f \n",precioLatam);
					printf("Pagando con tarjeta de debito tiene un valor : %.2f $\n",descuentoLatam);
					printf("Pagando con tarjeta de cr?dito tiene un valor : %.2f $\n",recargoLatam);
					printf("Pagando con BTC(bitcoin) tiene un valor de %.8f btc \n",precioLatamBitcoin);
					printf("El precio unitario: %2.f $ \n",precioUnitarioLatam);

					printf("Aerolineas.\n\n");
					printf("El precio del vuelo con Aerolineas es %.2f \n",precioAerolineas);
					printf("Pagando con tarjeta de debito tiene un valor : %.2f $\n",descuentoAerolineas);
					printf("Pagando con tarjeta de cr?dito tiene un valor : %.2f $\n",recargoAerolineas);
					printf("Pagando con BTC(bitcoin) tiene un valor de %.8f btc \n",precioAerolineasBitcoin);
					printf("El precio unitario: %.2f $ \n",precioUnitarioAerolineas);
					printf("la diferencia de precio entre los dos vuelos es de %.2f $ \n", resultadoDiferencia);
				}else{
					printf("Se debe ingresar los datos para hacer los calculos\n");
				}

			break;
		case 5:
					utn_Descuento(aerolineasForzado, DESCUENTO, & descuentoAerolineas);
					utn_Descuento(latamForzado, DESCUENTO, & descuentoLatam);
					utn_Recargo(aerolineasForzado, INTERES, &recargoAerolineas);
					utn_Recargo(latamForzado, INTERES, &recargoLatam);
					utn_Bitcoin(aerolineasForzado, BITCOIN, &precioAerolineasBitcoin);
					utn_Bitcoin(latamForzado, BITCOIN, &precioLatamBitcoin);
					utn_precioUnitario(aerolineasForzado, kilometrosForzado, &precioUnitarioAerolineas);
					utn_precioUnitario(latamForzado, kilometrosForzado, &precioUnitarioLatam);
					utn_DiferenciaAerolineas(kilometrosForzado, precioAerolineas , &resultadoDiferencia);

					printf("los kilometros ingresados son %.2f Km.\n",kilometrosForzado);
					printf("Latam\n\n");
					printf("El precio del vuelo con Latam es %.2f \n",latamForzado);
					printf("Pagando con tarjeta de debito tiene un valor : %.2f $\n",descuentoLatam);
					printf("Pagando con tarjeta de cr?dito tiene un valor : %.2f $\n",recargoLatam);
					printf("Pagando con BTC(bitcoin) tiene un valor de %.8f btc \n",precioLatamBitcoin);
					printf("El precio unitario: %2.f $ \n",precioUnitarioLatam);

					printf("Aerolineas.\n\n");
					printf("El precio del vuelo con Aerolineas es %.2f \n",aerolineasForzado);
					printf("Pagando con tarjeta de debito tiene un valor : %.2f $\n",descuentoAerolineas);
					printf("Pagando con tarjeta de cr?dito tiene un valor : %.2f $\n",recargoAerolineas);
					printf("Pagando con BTC(bitcoin) tiene un valor de %.8f btc \n",precioAerolineasBitcoin);
					printf("El precio unitario: %.2f $ \n",precioUnitarioAerolineas);
					printf("la diferencia de precio entre los dos vuelos es de %.2f $ \n", resultadoDiferencia);

						break;


	}

		}


	}while(opcion!=6);


	return EXIT_SUCCESS;
}
