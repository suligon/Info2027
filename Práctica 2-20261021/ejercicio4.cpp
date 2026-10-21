/**
 *
 * @file ejercicio4.cpp
 *
 * @brief 
 *
 * Calcula el importe a pagar por un cliente de una tienda, aplicando
 * un descuento segun el tramo en el que se encuentre su gasto.
 *
 * Datos de Entrada: el gasto realizado por el cliente.
 *
 * Datos de Salida: el descuento aplicado y el importe a pagar.
 *
 * @version 1.0
 * @author Gonzalo
 * @author Tianhao Shan
 * @date 21-10-2026
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>

using namespace std;

int main()
{
    double gasto, porcentaje, descuento, importe_pagar;

    cout << "Indica el gasto realizado (euros): " << endl;
    cin >> gasto;

    if (gasto < 1000)
        porcentaje = 0.10;
    else if (gasto < 2000)
        porcentaje = 0.15;
    else if (gasto < 4000)
        porcentaje = 0.20;
    else
        porcentaje = 0.25;

    descuento = gasto * porcentaje;
    importe_pagar = gasto - descuento;

    cout << "Gasto: " << gasto << " euros." << endl;
    cout << "Descuento: " << descuento << " euros (" << porcentaje * 100 << "%)." << endl;
    cout << "--------------------------" << endl;
    cout << "Importe a pagar: " << importe_pagar << " euros." << endl;

    return 0;
}

/*
ALGORITMO DescuentoTienda
// Calcula el importe a pagar aplicando el descuento segun el tramo de gasto
CONSTANTES
    (ninguna, los porcentajes van directos en las condiciones)
VARIABLES
    gasto, descuento, porcentaje, importe_pagar : REAL
INICIO
    ESCRIBIR "Indica el gasto realizado (euros): "
    LEER gasto

    SI gasto < 1000 ENTONCES
        porcentaje <- 0.10
    SINO SI gasto < 2000 ENTONCES
        porcentaje <- 0.15
    SINO SI gasto < 4000 ENTONCES
        porcentaje <- 0.20
    SINO
        porcentaje <- 0.25
    FINSI

    descuento <- gasto * porcentaje
    importe_pagar <- gasto - descuento

    ESCRIBIR "Gasto: ", gasto, " euros."
    ESCRIBIR "Descuento: ", descuento, " euros (", porcentaje * 100, "%)."
    ESCRIBIR "Importe a pagar: ", importe_pagar, " euros."
FIN
*/