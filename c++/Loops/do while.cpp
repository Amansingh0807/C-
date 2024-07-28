

// Note: In the do-while loop, the loop body will execute at least once irrespective of the test condition. 

#include <iostream> 
using namespace std; 

int main() 
{ 
	// Initialization expression 
	int i = 2; 

	do { 
		// Loop body 
		cout << "Hello universe\n"; 

		// Update expression 
		i++; 

	} 
	// Test expression 
	while (i < 10); 

	return 0; 
}
