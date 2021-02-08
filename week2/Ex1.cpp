#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b;
    cin >> a >> b;
    while (a != b) {
        if (a < b) b = b - a;
        else if (b < a) a = a - b;
    }
    cout << a << endl;
    return 0;
}
