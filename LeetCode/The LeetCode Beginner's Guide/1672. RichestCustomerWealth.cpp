#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

//-----------------------------------------------------------------------------------------------
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int valorMaximo = 0;
        for(int i = 0; i < accounts.size(); i++)
        {
            int temp = 0;
            for(int j = 0; j < accounts[i].size(); j++)
            {
                temp += accounts[i][j];
            }
            
            if(temp > valorMaximo) // MEJOR -> valorMaximo = max(ValorMaximo, temp);
            {
                valorMaximo = temp;
            }
        }

        return valorMaximo;
    }
};
//-----------------------------------------------------------------------------------------------


int main() 
{
    int n_filas;
    cin >> n_filas;   //? Cuantos clientes
    cin.ignore();    //! ⚠️ descarta el '\n' que quedó después del 3
    /*
    Porque cin >> filas lee el 3 pero deja el \n ahí colgando. 
    Si no lo descartas, el siguiente getline leería ese \n 
    y devolvería un string vacío. 
    cin.ignore() se come un carácter (el \n) y limpia el buffe
    */

    // Inicializndo la matriz con n filas
    vector<vector<int>> accounts(n_filas);
    
    for(int i = 0; i < n_filas; i++)
    {
        //* Inicializamos un string para que lea esto en lugar del teclado
        string linea;    
        getline(cin, linea);    //? lee TODA la línea: "1 5"
        
        //? Un stringstream es como un "cin de mentira" lee string el lugar del teclado
        //? Es decir, agarra el string "1 5" y lo trata como si fuera el chorro de intput, extrayendo números con >> uno por uno
        stringstream datosLinea(linea); 
        
        vector<int> fila;

        int num;
        while (datosLinea >> num)           //? "Mientras puedas sacar un número del stringstream, guardalo en num"
        {
            fila.push_back(num);    // 1. Mete el numero en el vector fila
        }                           //? Cuando ya no hay más numeros, la condiccion falla y se sale del bucle
        
        accounts.push_back(fila);   // 2. Luego mete el vector fila en la matriz
        /* Como el for es de i a n_filas
        - Metene n filas(vectores) en la matriz */
    }   

    Solution sol;

    //Llamar a la función
    cout << sol.maximumWealth(accounts) << endl;

    return 0;
}
