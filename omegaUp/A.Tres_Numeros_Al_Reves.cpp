/*
Tu misión si decides aceptarla es recibir los 3 números que desactivan la bomba del destino final,
para desactivarla simplemente tienes que mostrar los 3 números recibidos en forma contraria a como los recibiste.

Este mensaje se auto destruirá en 5,4,3...*/

#include <iostream>
using namespace std;

int main()
{
  int n1, n2, n3;
  cin >> n1 >> n2 >> n3;

  cout << n3 << endl << n2 << endl << n1 << endl;
  return 0;
}