// // 1) find the last occurence of an element x in the given array 
// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
// vector<int> v(6);
// //  taking input from user as an array 
//  for (int i=0;i<6;i++){
//     cin>>v[i];
//  }
// cout << "enter x";
// int x;
// cin>>x;
// // to check occurence

// int occurence=-1;
// for(int i=0; i < v.size(); i++)
// {
//     if (v[i]==x)
//     {
//         occurence=i;
//     }
//     cout<<occurence<<endl;
    
// }

// // HERE IT WILL SHOW AN ERROR OF SIGNED AND UNSIGNED ERROR DURING RUNTIME WE CAN ACTUALLY SOLVE THIS PROBLEM AS WE HAVE V.SIZE IS UNSIGNED OPERATOR/DATATYPE AND INT IS A SIGNED OPERATOR SO WE SHOULD USE  for ( unsigned int i=0; i < v.size();i++) AS BELOW MENTIONED // //

//     return 0;
// }


// // 2) counting the nyumber of occurence in a given array 
// #include <iostream>
// #include <vector>
// using namespace std;


// int main(){
// vector<int> v(6);
// //  taking input from user as an array 
//  for ( unsigned int i=0; i < v.size();i++){
//     cin>>v[i];}

// cout << "enter x";
// int x;
// cin>>x;

// int occurence=0;
// for (int ele:v){
//     if (ele==x)
//     {
//        occurence++;

//     }
    
// }
// cout<<endl;

//  return 0;
//  }

