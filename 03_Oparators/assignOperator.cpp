#include <iostream>

using namespace std;

int main(){ 
    int teaBag;
    cout << "How many tea bag you have: ";
    cin >> teaBag;

    if (teaBag < 10)
    {
        teaBag = teaBag + 5;
        cout << "Five more tea bag added in your tea bag: " << teaBag;
    } else {
        cout << "You have tea bags of : " << teaBag;
    }           

    return 0;
}