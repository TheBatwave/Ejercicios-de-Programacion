#include <iostream>

using namespace std;


int main()
{
  int n, i;
  cin >> n;

  for(i = 0; i < n; i++)
  {
    int dificultad;
    cin >> dificultad;

    if(dificultad != 0)
    {
      cout << "HARD";
      return 0;
    } 
  }

  cout << "EASY";

  return 0;
}