#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<int> t(n);
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    
    int respuesta = 0;
    int i = 0;

    while(i < n)
    {
        int j = i;
        while((j < n) && (t[j] == t[i]))
        {
            j++; // j avanzo el primer bloque de numeros consecutivos
        }

        if(j < n)
        {
            int k = j;
            while( (k < n) && (t[k] == t[j]) )
            k++;

            int bloque1 = j - i;
            int bloque2 = k - j;


            int bloque_mas_corto;
            if(bloque1 < bloque2)
            {
                bloque_mas_corto = bloque1;
            } else {
                bloque_mas_corto = bloque2;
            }

            int cant_numeros = bloque_mas_corto;
            int longitud_mas_larga = 2 * cant_numeros;

            if(longitud_mas_larga > respuesta)
            {
                respuesta = longitud_mas_larga;
            }
        }

        i = j;
    }

    cout << respuesta << endl;
    return 0;
}





