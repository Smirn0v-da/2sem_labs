#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, s, max;
    s = 0;
    max = 0;
    cin >> a;
    while (a != 0){
        if (a == max) s++;
        if (a > max){
            max = a;
            s = 1;
        }
        cin >> a;
    }
    cout << s << endl;
    return 0;
}
