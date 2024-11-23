#include <iostream>

using namespace std;

int main(){ 
    int teaCupcount;
    char userStatus;
    
    cout << "How many tea cup you have: " ;
    cin >> teaCupcount;

    cout << "Are you a student (Y/N): " ;
    cin >> userStatus;

    if (userStatus == 'Y' || teaCupcount > 15)
    {
        cout << "You are eligible for a tea subscription discount." << endl;
    } else {
        cout << "You are not eligible for a tea subscription discount." << endl;
    }

    return 0;
}