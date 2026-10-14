/***********************************************************************/ /**
 *
 * @file ejercicio1.cpp
 *
 * Practica 1: Empezando a programar en C++
 * Calcula la superficie y el volumen de un cubo a partir de la longitud
 * de su lado, introducida por teclado.
 *
 * @version 1.0
 * @author Gonzalo
 * @author Tianhao Shan
 * @date 14/10/2026
 *
 ***************************************************************************/
#include <iostream>
using namespace std;

/**
 * Programa principal.
 * Pide el lado del cubo y calcula su superficie y su volumen.
 */
int main()
{
    // DECLARACION DE VARIABLES
    float lado;         // Longitud del lado del cubo, en metros
    float superficie;   // Superficie total del cubo (6 caras), en m2
    float volumen;      // Volumen del cubo, en m3

    // ENTRADA DE DATOS
    cout << "Indica el lado del cubo (metros): ";
    cin >> lado;

    // PROCESAMIENTO DE INFORMACION
    // Se aplican las formulas del cubo para obtener superficie y volumen
    superficie = 6 * lado * lado;
    volumen = lado * lado * lado;

    // SALIDA DE RESULTADOS
    cout << "La superficie del cubo es " << superficie << " m2." << endl;
    cout << "El volumen del cubo es " << volumen << " m3." << endl;

    return 0;
}