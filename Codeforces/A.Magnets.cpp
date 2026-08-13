#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string anterior, actual;
    cin >> anterior; 
    
    int grupos = 1;   
    
    for (int i = 1; i < n; i++) 
    {
        cin >> actual;
        
        
        if (actual != anterior) 
        {
            grupos++;
        }
        
        anterior = actual;
    }
    
    cout << grupos << endl;
    
    return 0;
}