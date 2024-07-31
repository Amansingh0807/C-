
#include <iostream>
#include <vector>
using namespace std; 

// Driver Code 
int main() 
{ 

	// Declare the vector 
	vector<int> arr = { 1, 2, 3, 4 }; 

	// Traversing the vector using 
	// values directly 
	for (auto & it : arr) { 

		// Print the values 
		cout << it << endl; 
	} 
	return 0; 
} 
