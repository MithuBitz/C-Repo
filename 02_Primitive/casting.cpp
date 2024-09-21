#include <iostream>

using namespace std;

int main()
{
    float mobilePrice = 88.99;
    int roundedMobilePrice = (int) mobilePrice; // type casting to int

    int quantity = 5;
    float totalCost = mobilePrice * quantity; 

    cout << roundedMobilePrice << endl;
    cout << totalCost << endl;


    return 0;
}