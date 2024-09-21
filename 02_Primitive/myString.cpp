#include <iostream>
#include <string>

using namespace std;

int main()
{
    string favPlayer = "Sachin Tendulkar \n"; // string can return all characters of string, which is not possible in char 
    // \n is called escape sequence in c++

    string description = "Sachin is a great player of \"Cricket\" "; // \ is called escape character in c++

    cout << favPlayer << description << endl;

    return 0;
}