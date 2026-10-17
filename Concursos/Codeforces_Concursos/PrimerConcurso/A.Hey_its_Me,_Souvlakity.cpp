#include <iostream>
#include <string>
using namespace std;

int main()
{
  int t;
  cin >> t;

  while(t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int pos_primerUno = -1;
    int pos_ultimoUno = -1;
    int cantidadUnos = 0;
    for(int j = 0; j < n; j++)
    {
      if(s[j] == '1')
      {
        cantidadUnos++;
        if(pos_primerUno == -1)
        {
          pos_primerUno = j;
        }
        pos_ultimoUno = j;
      }
    }

    int resultado;
    if(cantidadUnos == 2)
    {
      resultado = 1;
    }
    else
    {
      resultado = pos_ultimoUno - pos_primerUno;
    }

    cout << resultado << "\n";
  }

  return 0;
}