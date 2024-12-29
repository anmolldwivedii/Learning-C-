#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0, num;
    cout << "Enter the value of num : ";
    cin >> num;
    
    while (i <= num) {
        sum += i;
        i += 2;
    }
    cout << sum << endl;
    
    return 0;
}
