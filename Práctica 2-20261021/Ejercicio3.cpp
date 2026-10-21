/**
 *
 * @file ejercicio3.cpp
 *
 * @brief 
 *
 * Muestra la letra asociada con el dni puesto
 *
 * Datos de Entrada:  valor del dni , int.
 * 
 * Datos de Salida: la letra del dni , char.
 *
 * @version 1.0
 * @author TianHao Shan,
 * @date 21-10-2026
 *
 * @copyright Universidad de Valencia
 */
 
 #include <iostream>

using namespace std;

int main() {
    
    int DNI , resto;
    char letra;
    
    cout << "Introduce el DNI sin la letra para mostrar la letra" << endl;
    cin << DNI;
    
    resto = DNI % 23;
    if (resto == 0) {
        cout << "la letra del DNI es T" << endl;
    }
    else if (resto == 1) {
        cout << "la letra del DNI es R" << endl;
    }
    else if (resto == 2) {
        cout << "la letra del DNI es W" << endl;
    }
    else if (resto == 3) {
        cout << "la letra del DNI es A" << endl;
    }
    else if (resto == 4) {
        cout << "la letra del DNI es G" << endl;
    }
    else if (resto == 5) {
        cout << "la letra del DNI es M" << endl;
    }
    else if (resto == 6) {
        cout << "la letra del DNI es Y" << endl;
    }
    else if (resto == 7) {
        cout << "la letra del DNI es F" << endl;
    }
    else if (resto == 8) {
        cout << "la letra del DNI es P" << endl;
    }
    else if (resto == 9) {
        cout << "la letra del DNI es D" << endl;
    }
    else if (resto == 10) {
        cout << "la letra del DNI es X" << endl;
    }
    else if (resto == 11) {
        cout << "la letra del DNI es B" << endl;
    }
    else if (resto == 12) {
        cout << "la letra del DNI es N" << endl;
    }
    else if (resto == 13) {
        cout << "la letra del DNI es J" << endl;
    }
    else if (resto == 14) {
        cout << "la letra del DNI es Z" << endl;
    }
    else if (resto == 15) {
        cout << "la letra del DNI es S" << endl;
    }
    else if (resto == 16) {
        cout << "la letra del DNI es Q" << endl;
    }
    else if (resto == 17) {
        cout << "la letra del DNI es V" << endl;
    }
    else if (resto == 18) {
        cout << "la letra del DNI es H" << endl;
    }
    else if (resto == 19) {
        cout << "la letra del DNI es L" << endl;
    }
    else if (resto == 20) {
        cout << "la letra del DNI es C" << endl;
    }
    else if (resto == 21) {
        cout << "la letra del DNI es K" << endl;
    }
    else if (resto == 22) {
        cout << "la letra del DNI es E" << endl;
    }
    return 0;
}