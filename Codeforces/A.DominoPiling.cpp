#include <iostream>
using namespace std;
/*Ejercicio
Nos dan 2 integrales los cuales son las medidas de un tablero de M x N
y tenemos que decir el número maximo de piezas de domino que pueden caber en la tabla
 */

int main() {
    int M, N;
    cin >> M >> N;

    // Cada ficha cubre 2 cuadritos.
    // La división entera descarta automáticamente el cuadrito sobrante
    // si M*N es impar.

    int resultado = (M * N) / 2;
    
    cout << resultado << endl;
    
    return 0;
}