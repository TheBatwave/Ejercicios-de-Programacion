#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;
    
    int ceros = 0;
    int negativos = 0;
    for(int i = 0; i < n; i++)
    {
      int numero;
      cin >> numero;

      if(numero == 0)
      {
        ceros++;
      } 
      else if(numero == -1)
      {
        negativos++;
      }

    }
      int respuesta = ceros;
    
      if(negativos % 2 == 1)
      {
        respuesta +=2;
      }
    
      cout << respuesta << endl;
  }

  return 0;
}