/***********************************************************************/ /**
 *
 * @file ejercicio4.cpp
 *
 * Practica 1: Empezando a programar en C++
 * Reparte el importe de tres donaciones (libras, dolares y euros) entre
 * tres partidas: centro de salud, comedor de ninos y gastos administrativos.
 *
 * @version 1.0
 * @author Gonzalo
 * @author Tianhao Shan
 * @date 14/10/2026
 *
 ***************************************************************************/
#include <iostream>
using namespace std;

const double CAMBIO_GBP_EUR = 1.15;   
const double CAMBIO_USD_EUR = 0.87;   
const double PORC_SALUD = 0.60;      
const double PORC_COMEDOR = 0.35;     

/**
 * Programa principal.
 * Pide tres donaciones en libras, dolares y euros, las convierte todas
 * a euros y calcula el importe que corresponde a cada partida.
 */
int main()
{
    // DECLARACION DE VARIABLES
    double donacion_libras;    
    double donacion_dolares;   
    double donacion_euros;     
    double total_euros;        
    double centro_salud;       
    double comedor_ninos;      
    double gastos_admin;       

    // ENTRADA DE DATOS
    cout << "Donacion en libras esterlinas: ";
    cin >> donacion_libras;
    cout << "Donacion en dolares: ";
    cin >> donacion_dolares;
    cout << "Donacion en euros: ";
    cin >> donacion_euros;

    // PROCESAMIENTO DE INFORMACION
    // Se convierten las tres donaciones a euros para poder sumarlas
    total_euros = (donacion_libras * CAMBIO_GBP_EUR) + (donacion_dolares * CAMBIO_USD_EUR) + donacion_euros;

    // Se reparte el total: el resto, tras salud y comedor, va a gastos administrativos
    centro_salud = total_euros * PORC_SALUD;
    comedor_ninos = total_euros * PORC_COMEDOR;
    gastos_admin = total_euros - centro_salud - comedor_ninos;

    // SALIDA DE RESULTADOS
    cout << "Total recaudado: " << total_euros << " euros." << endl;
    cout << "Centro de salud: " << centro_salud << " euros." << endl;
    cout << "Comedor de ninos: " << comedor_ninos << " euros." << endl;
    cout << "Gastos administrativos: " << gastos_admin << " euros." << endl;

    return 0;
}

/*
 * PSEUDOCODIGO
 *
 * ALGORITMO RepartoDonaciones
 * // Convierte tres donaciones a euros y las reparte entre tres partidas
 * CONSTANTES
 *     CAMBIO_GBP_EUR = 1.15
 *     CAMBIO_USD_EUR = 0.87
 *     PORC_SALUD = 0.60
 *     PORC_COMEDOR = 0.35
 * VARIABLES
 *     donacion_libras, donacion_dolares, donacion_euros : REAL
 *     total_euros, centro_salud, comedor_ninos, gastos_admin : REAL
 * INICIO
 *     ESCRIBIR "Donacion en libras esterlinas: "
 *     LEER donacion_libras
 *     ESCRIBIR "Donacion en dolares: "
 *     LEER donacion_dolares
 *     ESCRIBIR "Donacion en euros: "
 *     LEER donacion_euros
 *
 *     total_euros <- (donacion_libras * CAMBIO_GBP_EUR) + (donacion_dolares * CAMBIO_USD_EUR) + donacion_euros
 *     centro_salud <- total_euros * PORC_SALUD
 *     comedor_ninos <- total_euros * PORC_COMEDOR
 *     gastos_admin <- total_euros - centro_salud - comedor_ninos
 *
 *     ESCRIBIR "Total recaudado: ", total_euros, " euros."
 *     ESCRIBIR "Centro de salud: ", centro_salud, " euros."
 *     ESCRIBIR "Comedor de ninos: ", comedor_ninos, " euros."
 *     ESCRIBIR "Gastos administrativos: ", gastos_admin, " euros."
 * FIN
 */