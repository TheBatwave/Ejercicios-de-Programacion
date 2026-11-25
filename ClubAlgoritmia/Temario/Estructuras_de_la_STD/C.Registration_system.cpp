#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  unordered_map<string, int> dataBase;
  for(int i = 0; i < n; i++)
  {
    string nombre;
    cin >> nombre;
    /* .count()
        1: La llave sí existe en el mapa.
        0: La llave no existe en el mapa.
    */
    if(dataBase.count(nombre)) // Si el nombre esta en la base de datos, lo imprime con un número para diferenciarlo
    {
      cout << nombre << dataBase[nombre] << endl;
      dataBase[nombre]++;
    } 
    else  // Si el nombre no esta en la base de datos (.count(nombre) == 0)
    {
      cout << "OK" << endl;
      dataBase[nombre] = 1;
    }
  }


  return 0;
}