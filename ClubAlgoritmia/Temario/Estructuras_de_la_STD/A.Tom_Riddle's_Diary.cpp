#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
  int n;
  cin >> n;

  unordered_set<string> propietarios; 

  for(int i = 0; i < n; i++)
  {
    string nombre;
    cin >> nombre;
    
    if(propietarios.count(nombre))
    {
      cout << "YES" << endl;
    }
    else
    {
      propietarios.insert(nombre);
      cout << "NO" << endl;
    }
  }
  return 0;
}