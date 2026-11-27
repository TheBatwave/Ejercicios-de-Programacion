#include <iostream>
#include <vector>
using namespace std;

int main() 
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tam, misiones;
  if(!(cin >> tam >> misiones)) // Si no se pueden tomar los datos de inicio, false;
    return 0;
  
  // Indexamso desde 1 hasta tam (n) para que coincida con start y end (s y t)
  vector<long long> terreno(tam + 1); // Para poder comenzar en 1
  for(int i = 1; i <= tam; i++)
  {
    cin >> terreno[i];
  }

  // pref_der[i]: daño acomulado al viajar desde 1 hasta i (hacia la derecha)
  vector<long long> pref_der(tam+1, 0); // Tiene un tamaño de tam + 1 y se inicia con todos los valores como 0
  for(int i = 2; i <= tam; i++)
  {
    long long damage = 0;
    if(terreno[i - 1] > terreno[i]) // Si el terreno anterior es mayor, hubo daño
    {
      damage = terreno[i - 1] - terreno[i];
    } 

    pref_der[i] = pref_der[i - 1] + damage;
  }

  // pref_izq[i]: daño acumulado al viajar desde tam (n) hasta i (hacia la izquierda)
  vector<long long> pref_izq(tam + 1, 0);
  for(int i = tam - 1; i >= 1; i--)
  {
    long long damage = 0;
    
    if(terreno[i + 1] > terreno[i])
    {
      damage = terreno[i + 1] - terreno[i];
    }

    pref_izq[i] = pref_izq[i + 1] + damage;
  }
  
  // Respondemos cada misión en O(1)
  for(int j = 0; j < misiones; j++)
  {
    int start, end;
    cin >> start >> end;

    if(start < end) // Verificamos que sea de izquierda a derecha
    {
      cout << pref_der[end] - pref_der[start] << '\n';
    } else{
      cout << pref_izq[end] - pref_izq[start] << '\n';
    }
  }

  return 0;
}