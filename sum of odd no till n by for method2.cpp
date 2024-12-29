#include <iostream>
using namespace std;

int main() {
    int sum = 0, num;
    cout << "Enter the value of num : ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        if (i%2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    
    return 0;
}
