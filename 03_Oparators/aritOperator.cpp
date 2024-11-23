#include <iostream>

using namespace std;

int main(){
    int  numberOfCups ;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of tea cups: ";
    cin >> numberOfCups;

    cout << "Enter the price per cup: ";
    cin >> pricePerCup;

    totalPrice = numberOfCups * pricePerCup;
    
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price: " << discountedPrice << endl;
    } else {
        cout << "Total price is: " << totalPrice << endl;
    }
    

    return 0;
}