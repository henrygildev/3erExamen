/* Crea un programa en C++ que le pida al usuario su peso en kilogramos y su altura en metros, y calcule su IMC. 
Luego, utiliza condicionales para mostrar en pantalla si el usuario tiene un peso saludable o no, según los siguientes criterios:
Si el IMC es menor a 18.5, mostrar "Peso insuficiente".
Si el IMC está entre 18.5 y 24.9, mostrar "Peso normal".
Si el IMC está entre 25 y 29.9, mostrar "Sobrepeso".
Si el IMC es igual o mayor a 30, mostrar "Obesidad".*/

#include <iostream>
using namespace std;

int main()
{
    float peso;
    float altura;
    float imc;
    // Calculo del IMC

    cout << "Por favor ingrese su pero en kilogramos: ";
    cin >> peso;
    cout << "Por favor ingrese su altura en metros: ";
    cin >> altura;
    imc = peso / (altura * altura);
    cout << imc << endl;

    // Evaluacion del IMC
    if (imc < 18.5) {
        cout << "Peso insuficiente";
    } else if (imc >= 18.5 && imc <= 24.9){
        cout << "Peso Normal" << endl;
    } else if (imc >= 25 && imc <= 29.9) {
        cout << "Sobrepeso" << endl;
    } else {
        cout << "Obesidad";
    }
    return 0;
}