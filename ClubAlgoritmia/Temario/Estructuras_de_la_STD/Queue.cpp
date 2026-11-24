#include <iostream>
#include <queue>
#include <string>
using namespace std;

// Definino mi propia estructura para representar un proceso
struct Proceso {
  string nombre;
  int tiempo;
};

int main()
{
  // Optimización para lectura y escritura rápida (importante porque n puede ser 100,000)
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, q;
  if(!(cin >> n >> q))
  {
    return 0;
  }

  // Inicializamos una queue llamada "cola" que guarda elementos de tipo "Proceso"
  queue<Proceso> cola;

  for(int i = 0; i < n; i++)
  {
    Proceso p;
    cin >> p.nombre >> p.tiempo;
    cola.push(p); // Metemos el struct completo a la cola;
  }

  int tiempo_total = 0;

  while(!cola.empty())
  {
    // Sacamos el proceso que esta enfrente de la cola
    Proceso actual = cola.front();
    cola.pop();

    if(actual.tiempo <= q) // El tiempo de el proceso es menor o igual al quantum 100
    {
      // El proceso alcanza a terminar
      tiempo_total += actual.tiempo;
      cout << actual.nombre << " " << tiempo_total << "\n";
    } else {
      // El proceso no termina: se le resta el quantum y regresa al final
      tiempo_total += q;
      actual.tiempo -= q;
      cola.push(actual);
    }

  }
  return 0;
}

