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

/*
 * Respuestas al enunciado:
 *
 * Con el tipo float el resultado obtenido es incorrecto (normalmente 0),
 * porque float solo almacena unos 7 digitos significativos y c1 y c2
 * necesitan 10 digitos para distinguirse: al almacenarse se redondean
 * al mismo valor y la resta da 0.
 *
 * Tipo de error: no es sintactico ni lexico, ya que el programa compila
 * y se ejecuta sin fallar. Es un error logico de precision, causado por
 * elegir un tipo de dato con menos digitos significativos de los que
 * el calculo requiere.
 *
 * Solucion: se sustituye float por double, que ofrece unos 15 digitos
 * significativos y permite distinguir ambos valores.
 */