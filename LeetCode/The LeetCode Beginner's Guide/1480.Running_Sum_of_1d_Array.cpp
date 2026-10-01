#include <iostream>
#include <vector>
using namespace std;

//-----------------------------------------------------------------------------------------------
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    // Este es el resultado ------------------------------------------------------------------
    {    
      for(int i = 1; i < nums.size(); i++)
      {
        nums[i] = nums[i] + nums[i-1];
      }

      return nums;
    }
    //---------------------------------------------------------------------------------------
};
//-----------------------------------------------------------------------------------------------


// Esta solo es la prueba de entrada y salida
int main () 
{
  Solution sol;
  vector<int> nums;
  int valor;

  // Leer los números de entrada
  while(cin >> valor)
  {
    nums.push_back(valor);
  }
  
  // Llamar a la función
  vector<int> resultado = sol.runningSum(nums);
 
  // Mostrar la salida correcta
  cout << "[";
  for(int i = 0; i < resultado.size(); i++)
  {
    cout << resultado[i];
    if(i < resultado.size() -1)
      cout << ",";
  }

  cout << "]" << endl;

  return 0;
}

