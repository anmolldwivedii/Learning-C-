#include <iostream>
using namespace std;

int main() {
    char string;
    cout << "Enter the value of string : ";
    cin >> string;
    
    if ((int)string >= 65 && (int)string <= 91) {
        
        cout << "the string is uppercase\n";
    } else if ((int)string >= 97 && (int)string <= 123) {
        
        cout << "the string is lower case\n";
    }
    return 0;
}
