#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0 || i%3==0) {
    
            continue;
        }
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}
