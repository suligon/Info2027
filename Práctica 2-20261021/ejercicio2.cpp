/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Evalua la función x^3 en el dominio de los enteros, f: Z --> Z
 *
 * Datos de Entrada:  valor de x, entero.
 * 
 * Datos de Salida: el valor de la función, entero.
 *
 * @version 1.0
 * @author TianHao Shan,
 * @author Gonzalo
 * @date 21-10-2026
 *
 * @copyright Universidad de Valencia
 */
 
#include <iostream>

using namespace std;

int main() 
{
	
	short x, res;

	cout << "Este programa calcula el valor de x^3 en el dominio de los enteros." << endl;
	cout << "... Cuidado!. Contiene errores logicos y/o de ejecucion ..." << endl;
	
	cout << "Inroduce el valor de x:" << endl;
	cin >> x;

    
    if (x > -32 || x < 31) {
        res = x * x * x ;
        cout << "El resultado de " << x << "^3 es: " <<  res << endl;
    }
    else {
        cout << "Error en el valor de x. El programa no está diseñado para procesar x^3." << endl;
    }

	return 0;
}
