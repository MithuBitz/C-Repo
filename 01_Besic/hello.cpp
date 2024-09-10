#include <iostream>

using namespace std;
//load specific method from namespace
// using std::cout;

// Createing custom namespace
// namespace myName{
//     void display(){
//         cout << "Mithu";
//     }
// }

int main(){
    cout << "Hello World from Mibits! Do you know me" << endl ;
    //If we dont want to load all std namespace, load only required then
    // std::cout << "Hello World from Mibits! Do you know me";
    
    //We can use our own namespace
    // myName::display();

    //Declare a constant which cannot be changed
    const int gameLevel = 5;
    cout << "Total Game level is : " << endl;
    cout << gameLevel << endl;

    //Declare a variable and initialize it in two lines
    int score;
    score = 100;
    cout << "Your score is : " << endl;
    cout << score << endl;

    //Declare a variable and initialize it in one line
    int topScore = 500;
    cout << "Game top score is : " << endl;
    cout << topScore;

    return 0;
}