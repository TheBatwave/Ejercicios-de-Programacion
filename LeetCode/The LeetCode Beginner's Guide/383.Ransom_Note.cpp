#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

//-----------------------------------------------------------------------------------------------
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        // Crear una tabla de búsqueda llamada "letras donde..."
        unordered_map<char, int> letras;   
        /*
            char (Primer tipo - La Clave / Key): 
                Es lo que vas a usar para buscar dentro del mapa (el índice). 
                En nuestro problema, buscamos por letras ('a', 'b', 'c').

            int (Segundo tipo - El Valor / Value): 
                Es el dato que vas a guardar asociado a esa clave. 
                En nuestro problema, guardamos cuántas veces aparece esa letra (1, 2, 5, etc.).
        */

        for(char c : magazine)
        {
            letras[c]++;
        }
        
        for(char c : ransomNote)
        {
            if(letras[c] == 0)
            {
                return false;   // Nos quedamos sin notas, no se puede armar una nota 
            } else {
                letras[c]--;
            }
        }
        return true;
    }
};

//-----------------------------------------------------------------------------------------------

// Esta solo es la prueba de entrada y salida
int main()
{
    Solution sol;
    string ransomNote, magazine;

    // 1. Leemos las dos cadenas desde la caja "Input" de CPH
    cin >> ransomNote >> magazine;

    // 2. Llamamos a la función e imprimimos "true" o "false"
    if(sol.canConstruct(ransomNote, magazine))
    {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

  return 0;
}
