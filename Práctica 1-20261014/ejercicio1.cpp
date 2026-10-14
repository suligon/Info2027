/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Determina la superficie de un cubo (m^2).
 * 
 * Datos de Entrada: el lado del cubo, real.
 *
 * Datos de Salida: la superficie, real.
 *
 * @version 1.0
 * @author Elena Díaz
 * @date 29-09-2024
 *
 * @copyright Universidad de Valencia
 */


#include <iostream>

using namespace std;

/* Funcion principal */
int main()
{
  float lado, superficie;

  cout << "Introduce el valor del lado (en m):" << endl;
  cin >> lado;
  
  superficie =  6 * lado * lado;
  
  cout << " La superficie de un cubo de lado " << lado  <<  " es (m^2): " << superficie << endl;

  return 0;
}
