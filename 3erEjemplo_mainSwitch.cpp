#include <iostream>
using namespace std;

        int calcular_suma(int numero1, int numero2){
            int resultado_suma = numero1 + numero2;
            return resultado_suma;
            }

int main()
{
    int option = 0;
    cout << "Introduce la opcion del el ejercicio que deseas realizar: ";
    cin >> option;
    switch (option) {
    case 1:
        cout << "Opción 1: ";
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
        break;
    
    case 2:
        cout << "Opción 2" << endl;
         for( int i=0; i < 21 ; i++){
        if (i % 2 == 0) {
        cout << i << endl;} 
        }
        return 0;
        break;

    case 3:
        cout << "Opción 3";
        break;

    case 4:
        cout << "Opción 4";
        int numero1;
        int numero2;
        cout << "Digite el primer numero" << endl;
        cin >> numero1;
        cout << "Digite el segundo numero" << endl;
        cin >> numero2;
        cout << "El resultado de la suma de los dos numeros es " << calcular_suma(numero1, numero2);
        return 0;
        break;
    
    default:
        cout << "Este ejercicio no existe";
        break;
    }
}
