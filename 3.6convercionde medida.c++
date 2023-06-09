#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float pies, yardas, pulgadas, cm, metros;
    cout << "Ingrese el valor en pies: ";
    cin >> pies;
    yardas = pies/3; // Convertir a yardas
    pulgadas = pies*12; // Convertir a pulgadas
    cm = pulgadas*2.54; // Convertir a centímetros
    metros = cm/100; // Convertir a metros
    cout << "Yardas: " << yardas << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Centimetros: " << cm << endl;
    cout << "Metros: " << metros << endl;
    return 0;
} // REALIZAR LA TRANSFORMACION DE PULGADAS A PIES
