#include <iostream>
using namespace std;

int main() {
    int facto = 1, num;
    cout << "Enter the value of num : ";
    cin >> num;
    
    for(int i = 1; i <= num; i++) {
        facto *= i;
    }
    cout << "the factorial till " << num << " is = " << facto << endl;
    
    return 0;
}
