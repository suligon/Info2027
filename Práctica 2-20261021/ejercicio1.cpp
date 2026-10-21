/**
 *
 * @file ejercicio1.cpp
 *
 * @brief 
 *
 * Calcula las soluciones de una ecuacion de segundo grado.
 * Contempla el caso de que exista dos soluciones, una o ninguna.
 * a x^2 + b x + c = 0
 *
 * Datos de Entrada:  los tres coeficientes de la ecuación.
 * 
 * Datos de Salida: las soluciones.
 *
 * @version 1.0
 * @author TianHao Shan,
 * @author Gonzalo
 * @date 21-10-2026
 *
 * @copyright Universidad de Valencia
 */
 
#include <cmath>
#include <iostream>

using namespace std;

int main() 
{
	
	float a, c, b, x1, x2, disc;

	cout << "Este programa resuelve una ecuacion de segundo grado de la forma" << endl;
	cout << "a x^2 + b x + c = 0" << endl;
	cout << "... Cuidado!. Contiene errores logicos y de ejecucion ..." << endl;
	
	cout << "Inroduce los tres coeficientes en orden (a, b, c)" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
    
    disc = b * b - 4 * a * c;
    
    if (a == 0){
        cout << "El coeficiente a no puede ser 0" << endl  ;
    }
    else if (disc < 0) {
        cout << "La ecuacion no tiene raices reales" << endl ;
    }
    else {
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a); 
    }
    if (a == 0 || disc < 0) {
        cout << "Error en los valores de los coeficientes, la ecuación no tiene solución." << endl;
    }
    else {
        cout << "Las raices son: " << endl;
	cout << x1 << " y " << x2 << endl;
    }
    

	return 0;
}
