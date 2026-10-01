#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> numeros(n);

        for (int i = 0; i < n; i++) 
        {
            cin >> numeros[i];
        }

        int respuesta = 1; 
        bool ordenado = true;

        for (int i = 1; i < n; i++) 
        {
            if (numeros[i] < numeros[i-1]) 
            {
                ordenado = false;
                break;
            }
        }

        if (ordenado)
        {
          respuesta = n;
        }  

        cout << respuesta << endl;
    }

    return 0;
}





