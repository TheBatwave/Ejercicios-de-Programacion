#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;


int main()
{
  unordered_map<char, int> freq;

  string nickname;
  cin >> nickname;

  for(char c : nickname)
  {
    freq[c++];
  }

  // El tamaño del mapa es el número de caracteres distintos
  int caracteres_distintos = freq.size();
  
  if(caracteres_distintos % 2 == 1)
  {
    cout << "IGNORE HIM!" << endl;
  } else {
    cout << "CHAT WITH HER!" << endl;
  }



  return 0;
}