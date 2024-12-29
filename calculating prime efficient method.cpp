#include <iostream>
using namespace std;

int main() {
    int num;
    bool isprime = true;
    cout << "Enter the value of num : ";
    cin >> num;
    
    for (int i = 2; i*i <= num; i++) {
        if (num % i == 0) {
            isprime = false;
            break;
        }
    }
    cout << (isprime == 1 ? "Is prime" : "Not prime");
    
    return 0;
}
