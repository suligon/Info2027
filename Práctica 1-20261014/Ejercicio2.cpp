/**
 *
 * @file ejercicio2.cpp
 *
 * @brief 
 *
 * Determina la diferencia decimal entre dos numeros.
 * 
 * Datos de Entrada: dos numeros decimales , float.
 *
 * Datos de Salida: la diferencia , float.
 *
 * @version 1.0
 * @author TianHao Shan, Gonzalo 
 * @date 14-10-2026
 *
 * @copyright Universidad de Valencia
 */
#include <iostream>

using namespace std;

int main (){
	
	float c1 = 0.1000000003;
	float c2 = 0.1000000005;
	float dif;

	dif = c2 - c1;

	cout << "La diferencia es" << dif << endl;
	
	return 0;
}

