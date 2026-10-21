/**
 *
 * @file ejercicio5.cpp
 *
 * @brief 
 *
 * Gestiona un selfservice de gasolinera: calcula el importe a pagar
 * segun los litros y el tipo de combustible elegido.
 *
 * Datos de Entrada: los litros deseados y el tipo de combustible (a, b o c).
 *
 * Datos de Salida: mensaje con los litros, el combustible y el importe.
 *
 * @version 1.0
 * @author Gonzalo
 * @author Tianhao Shan
 * @date 21-10-2026
 *
 * @copyright Universidad de Valencia
 */

#include <iostream>
#include <string>

using namespace std;

const double PRECIO_95 = 1.88;
const double PRECIO_98 = 1.94;
const double PRECIO_GASOLEO = 1.85;

int main()
{
    int litros;
    char opcion;
    double precio_litro, importe;
    string nombre_combustible;

    cout << "Indica los litros de combustible: " << endl;
    cin >> litros;

    cout << "a) Gasolina 95   b) Gasolina 98   c) Gasoleo A" << endl;
    cout << "Elige el tipo de combustible: " << endl;
    cin >> opcion;

    switch (opcion)
    {
        case 'a':
            precio_litro = PRECIO_95;
            nombre_combustible = "Gasolina 95";
            break;
        case 'b':
            precio_litro = PRECIO_98;
            nombre_combustible = "Gasolina 98";
            break;
        case 'c':
            precio_litro = PRECIO_GASOLEO;
            nombre_combustible = "Gasoleo A";
            break;
        default:
            cout << "Opcion no valida." << endl;
            return 0;
    }

    importe = litros * precio_litro;

    cout << "Ha puesto " << litros << " litros de " << nombre_combustible
         << ". Pase por caja y pague " << importe << " euros." << endl;

    return 0;
}
/*
ALGORITMO Gasolinera
// Calcula el importe a pagar segun los litros y el tipo de combustible elegido
CONSTANTES
    PRECIO_95 = 1.88
    PRECIO_98 = 1.94
    PRECIO_GASOLEO = 1.85
VARIABLES
    litros : ENTERO
    opcion : CARACTER
    precio_litro, importe : REAL
    nombre_combustible : CADENA
INICIO
    ESCRIBIR "Indica los litros de combustible: "
    LEER litros

    ESCRIBIR "a) Gasolina 95   b) Gasolina 98   c) Gasoleo A"
    ESCRIBIR "Elige el tipo de combustible: "
    LEER opcion

    SEGUN opcion HACER
        CASO 'a':
            precio_litro <- PRECIO_95
            nombre_combustible <- "Gasolina 95"
        CASO 'b':
            precio_litro <- PRECIO_98
            nombre_combustible <- "Gasolina 98"
        CASO 'c':
            precio_litro <- PRECIO_GASOLEO
            nombre_combustible <- "Gasoleo A"
        POR_DEFECTO:
            ESCRIBIR "Opcion no valida."
    FINSEGUN

    importe <- litros * precio_litro

    ESCRIBIR "Ha puesto ", litros, " litros de ", nombre_combustible,
             ". Pase por caja y pague ", importe, " euros."
FIN
*/