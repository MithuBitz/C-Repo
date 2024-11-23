// Bitwise Operator
// Write a program that users bitwise AND operator to chech which tea types are in stock. The stock is encoded in an interger (1 for Greeen, 2 for Black, 4 for Oolong). Allow the user to check availability by inputting the tea type(1, 2, or 4), and display a message saying whether that tea is in stock or not.

#include <iostream>

using namespace std;

int main(){ 

    int stock = 0; // 1 for Green, 2 for Black, 4 for Oolong

    int teaType; // 1 for Green, 2 for Black, 4 for Oolong

    cout << "Enter the tea type (1 for Green, 2 for Black, 4 for Oolong):";
    cin >> teaType;    

    if (stock & teaType) // bitwise AND operator to check availability of tea type in stock
    {
        cout << "The tea type is in stock." << endl;
    } else {
        cout << "The tea type is not in stock." << endl;
    }
    
    return 0;
}