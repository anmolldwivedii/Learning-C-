#include <iostream>
using namespace std;

int main() {
    char string;
    cout << "Enter the value of string : ";
    cin >> string;
    
    if (string >= 97 && string <= 122) {
        
        cout << "lowercase\n";
    } else {
        cout << "uppercase\n";
    }
    return 0;
}
