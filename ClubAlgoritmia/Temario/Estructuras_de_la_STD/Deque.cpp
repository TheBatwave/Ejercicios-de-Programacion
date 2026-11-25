#include <iostream>
#include <queue>
using namespace std;

int main()
{
  int t;
  cin >> t;

  deque<int> A;

  while(t--)
  {
    int tipo;
    cin >> tipo;
    
    //=========== PRIMERA OPERACIÓN: Meter elementos a la cola ======================================
    if(tipo == 0) // Si tipo = 0, se leen dos enteros más
    {
      int d, x;
      cin >> d >> x;

      if(d == 0) // Si d = 0, agrega el elemento al principio de A
        A.push_front(x);
      
      if(d == 1) // Si d = 1, agrega el elemento al final de A
        A.push_back(x);
    }

    //=========== SEGUNDA OPERACIÓN: Acceso a un elemento por indice ======================================
    if(tipo == 1)   // Si tipo = 1, Imprimira el elemento en la posición p
    {
      int p;
      cin >> p;

      if(!A.empty())
      {
        cout << A[p] << "\n";
      }
    }

    //=========== TERCERA OPERACIÓN: Eliminar un elemento de la cola ======================================
    if(tipo == 2)
    {
      int d;
      cin >> d;

      if(!A.empty()) // Mientras que la cola A no este vacía, se puede hacer pop
      {
        if(d == 0)  // Elimina el primer elemento de A
        {
          A.pop_front();
        }
  
        if(d == 1)  // Elimina el ultimo elemento de A
        {
          A.pop_back();
        }
      }
    }


  }


  return 0;
}