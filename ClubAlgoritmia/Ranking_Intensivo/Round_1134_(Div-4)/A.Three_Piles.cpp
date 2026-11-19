#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;

  for(int i = 0; i < n; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if(abs(b - a) == 1 && abs(c - b) == 1)
    {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}