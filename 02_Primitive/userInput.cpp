#include <iostream>
#include <string>

using namespace std;

main() {
    
    string cupCakes;
    int numberOfCupCakes;

    cout << "What is your favourite cupcake? \n";
    getline(cin, cupCakes);

    cout << "How many cupcake do you like? \n";
    cin >> numberOfCupCakes;

    cout << "Your favourite cupcake is " << cupCakes << " and you like " << numberOfCupCakes << " cupcake to eat.";

    // This prog cannot directly run in VS code so to reslove it we can run it in terminal with command line 
    // First locate the folder in terminal and then type : ./<executable file name not with extention>

    return 0;
}