#include <iostream>

using namespace std;

int main(){ 
    int teaCup;
    cout << "How many tea cup you need to buy : ";
    cin >> teaCup;

    if(teaCup > 20 ){
        cout << "Wao you got a GOLD badge." << endl;
    } else if(teaCup >= 10 && teaCup <= 20){
        cout << "Wao you got a SILVER badge." << endl;
    } else {
        cout << "Badge only available for 10 to 20 cups." << endl;
    }
    

    return 0;
}