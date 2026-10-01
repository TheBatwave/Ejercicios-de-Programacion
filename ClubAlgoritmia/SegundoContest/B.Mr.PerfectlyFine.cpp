#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{
    int c; // Casos
    cin >> c;

    while (c--) 
    {
      int n;
      cin >> n; // Libros
      
        int min11 = 1000000; 
        int min10 = 1000000;
        int min01 = 1000000;

        for (int i = 0; i < n; i++) 
        {
            int tiempo;
            string habilidades;

            cin >> tiempo >> habilidades;

            if (habilidades == "11") 
            {
                if(min11 > tiempo)
                {
                  min11 = tiempo;
                }
            } 
            else if (habilidades == "10") 
            {
                if(min10 > tiempo)
                {
                  min10 = tiempo;
                }
            }   
            else if (habilidades == "01") 
            {
              if(min01 > tiempo)
                {
                  min01 = tiempo;
                }  
            }
            // Si es 00 ignoramos
        }
  
        int mejorOpcion;
        if(min11 > min10 + min01)
        {
          mejorOpcion = min10 + min01;
        } 
        else 
        {
          mejorOpcion = min11;
        }
        
        // Si ninguna la mejor opcion es enorme, es imposibele
        if (mejorOpcion >= 1000000) 
        {
            cout << -1 << endl;
        } 
        else 
        {
            cout << mejorOpcion << endl;
        }
    }
    return 0;
}


