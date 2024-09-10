#include <iostream>

// using namespace std;
//load specific method from namespace
using std::cout;

// Createing custom namespace
// namespace myName{
//     void display(){
//         cout << "Mithu";
//     }
// }

int main(){
    cout << "Hello World from Mibits! Do you know me";
    //If we dont want to load all std namespace, load only required then
    // std::cout << "Hello World from Mibits! Do you know me";
    
    //We can use our own namespace
    // myName::display();
}