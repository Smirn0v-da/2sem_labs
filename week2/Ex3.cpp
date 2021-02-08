#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, s;
    s = 0;
    cin >> a;
    while (a != 0){
        if (a % 2 == 0) s++;
        cin >> a;
    }
    cout << s << endl;
    return 0;
}
