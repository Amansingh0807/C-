
// Vectors are the same as dynamic arrays with the ability to resize themselves automatically when an element is inserted or deleted, with their storage being handled automatically by the container

// What is std::vector in C++?
// std::vector in C++ is the class template that contains the vector container and its member functions. It is defined inside the <vector> header file. The member functions of the std::vector class provide various functionalities to vector containers.


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> aman;

    for (int i = 1; i <= 5; i++)
        aman.push_back(i);

    cout << "Size : " << aman.size();
    cout << "\nCapacity : " << aman.capacity();
    cout << "\nMax_Size : " << aman.max_size();

    // resizes the vector size to 4 - Resizes the container so that it contains ‘n’ elements.
    aman.resize(4);

    // prints the vector size after resize()
    cout << "\nSize : " << aman.size();

    // checks if the vector is empty or not
    if (aman.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    aman.shrink_to_fit();
    cout << "\nVector elements are: ";
    for (auto it = aman.begin(); it != aman.end(); it++)
        cout << *it << " ";

    return 0;
}

