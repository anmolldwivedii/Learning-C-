#include <iostream>
using namespace std;

int main() {
    char string;
    cout << "Enter the value of string : ";
    cin >> string;
    
    if (string >= 'a' && string <= 'z') {
        
        cout << "lowercase\n";
    } else {
        cout << "uppercase\n";
    }
    return 0;
}
