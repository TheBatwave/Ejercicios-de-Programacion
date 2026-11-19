#include <iostream>

using namespace std;

char cambio_de_color(char colorActual)
{
  if(colorActual == 'B')
  {
    colorActual = 'R';
  } else {
    colorActual = 'B';
  }

  return colorActual;
}

int main() 
{

  int t;
  cin >> t;

  for(int j = 0; j < t; j++)
  {
    int tam = 0;
    int cambios = 0;
    cin >> tam;
    
    char color = 'R';

    char letras[tam];
    for(int k = 0; k < tam; k++)
    {
      cin >> letras[k];
    }

    for(int i = 0; i < tam; i++)
    {
      if(letras[i] != color)
      {
        cambios++;
  
        // Despues de escribir, se cambia el color
        color = cambio_de_color(color);
      }
      // Si es igual, solo se escribe pero se vuelve a cambiar el color
      color = cambio_de_color(color);
    }
    cout << cambios << endl;
  }

  return 0;
}

