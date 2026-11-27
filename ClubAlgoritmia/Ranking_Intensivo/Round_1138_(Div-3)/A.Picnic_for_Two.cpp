#include <iostream>
#include <vector>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while(t--)
  {
    int tam, fresas, cerezas;   // l, a, b
    cin >> tam >> fresas >> cerezas;

    vector<bool> tiene_fresa(tam, false); // Un vector de booleanos, de tamaño tam y todos n false;
    vector<bool> tiene_cereza(tam, false); // Un vector de booleanos, de tamaño tam y todos n false;

    int pos = 0;
    while(tiene_fresa[pos] != true) // !tiene_fresa[pos]
    {
      tiene_fresa[pos] = true;  // Marcalo como visitado
      pos = (pos + fresas) % tam; // Damos el salto circular
      //?cout << "fresae en: " << pos << endl;             Quitar para saber como se juntan:)
    }
    //?cout << endl;

    while(tiene_cereza[pos] != true) // !tiene_cereza[pos]
    {
      tiene_cereza[pos] = true;  // Marcalo como visitado
      pos = (pos + cerezas) % tam; // Damos el salto circular
      //?cout << "cereza en: " << pos << endl;       Quitar para saber como se juntan:)
    }
    //?cout << endl;


    int ambos = 0;
    for(int i = 0; i < tam; i++)
    {
      if(tiene_fresa[i] && tiene_cereza[i])
      {
        ambos++;
      }
    }

    cout << ambos << '\n';
  }

  return 0;
}