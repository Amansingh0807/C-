
// It is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition

#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // initialization expression 
    int i = 1; 
  
    // test expression 
    while (i < 10) { 
        cout << "Hello universe\n"; 
  
        // update expression 
        i++; 
    } 
  
    return 0; 
}