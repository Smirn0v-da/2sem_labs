#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a;
    cin >> a;
    while (a > 1){
        for (int i = 2; i <= a; i++){
            if (a % i == 0){
                a /= i;
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
