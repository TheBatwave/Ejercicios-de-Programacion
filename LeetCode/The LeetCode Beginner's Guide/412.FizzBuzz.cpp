#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
  public: 
    vector<string> fizzBuzz(int n) 
    {
      vector<string> answer;

      for(int i = 1; i <= n; i++)
      {
        string actual = "";
        
        if(i % 3 == 0)
        {
          actual += "Fizz";
        }
        if(i % 5 == 0)
        {
          actual += "Buzz";
        }
        if(actual == "")
        {
          actual = to_string(i);
        }

        answer.push_back(actual);
      }


      return answer;
    }
};


int main() 
{
  Solution sol;
  int t;
  cin >> t;

  vector<string> respuesta = sol.fizzBuzz(t);

  for(int i = 0; i < t; i++)
  {
    cout << respuesta[i] << endl;
  }

  return 0;
}