#include <iostream>
using namespace std;

int main() {
    int num;
    bool prime = true;
    cout << "Enter the value of num : ";
    cin >> num;
    
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            cout << num << " is Not Prime\n";
            prime = false;
            break;
        }
    }
    if (prime == 1) {
        cout << num << " is a Prime\n";
    }
    
    return 0;
}
