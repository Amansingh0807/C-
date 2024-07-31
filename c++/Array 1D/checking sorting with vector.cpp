// this program is to check whether an array is sorted or not 

#include <iostream>
#include <vector>
using namespace std;
int main(){
    int array[5] = {12,23,21,34,56};
// here it will return 0 as our given array is not sorted 

bool sorted=true;
for(int i=0;i<6;i++){
    if (array[i]<=array[i-1])
    {
       sorted=false;
    }
    
}
cout<<sorted<<endl;

    return 0;
}