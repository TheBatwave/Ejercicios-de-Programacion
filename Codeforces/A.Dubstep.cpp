#include <iostream>
#include <string>
using namespace std;

int main()
{
  string frase;
  cin >> frase;

  string resultado;
  for(int i = 0; i < frase.size(); i++)
  {
    if(i + 2 < frase.size() && frase[i] =='W' && frase[i+1] == 'U' && frase[i+2] =='B')
    {
      i += 2;
      
     if(!resultado.empty() && resultado.back() != ' ')
      {
          resultado += ' ';
      }

    } else {
      resultado += frase[i];
    }

  }

  cout << resultado << endl;
  
  return 0;
}
