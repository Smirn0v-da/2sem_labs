#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b, c;
    c = 1;
    cin >> a;
    b = std::pow(a, 0.5);
    for (int i = 2; i <= b; i++){
        if (a % i == 0){
            c = 0;
            break;
        }
    }
    cout << c << endl;
    return 0;
}
