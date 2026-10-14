/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * realiza la converison de euros a dolares.
 * 
 * Datos de Entrada: euros, float.
 *
 * Datos de Salida: dolares, float.
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
	
	float euros,dolares;

	dolares = euros * 0.89;

	cout << euros << " euros equivale a:" << dolares << " dolares." << endl;
	
	return 0;
}
