// array is a data structure that is used to store multiple values of similar datatypes 

// string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};  
// u can create the array like this above where cars is the variable name and size of array is 4 
#include <iostream>
using namespace std;
#include <array>
// int main(){
// string cars[4] = {"git", "stake", "neon", "leetcode"};
// cout << cars[0];
// }


// #include <iostream>
// using namespace std;
// int main(){
//     int array[3];
//     array[0] = 1;
//      array[1] = 3;
//       array[2] = 5;
//        array[3] = 7;
//       cout<<array<<endl;   // this will show the memory address (like = 0x61ff04) of the array not the  elements of that array 
// }


// if size of an array is not defined then we can use "sizeof()" operator 
int main(){
int cars[] = {4, 2, 0, 6};
cout<<sizeof(cars);
return 0;
}