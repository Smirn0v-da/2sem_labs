#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int a, b;
    string s;
    cin >> a;
    b = a % 60;
    a /= 60;
    string s1(b / 10, '<');
    string s2(b % 10, 'v');
    s = s1 + s2;
    while (a > 0){
        b = a % 60;
        a /= 60;
        string s1(b / 10, '<');
        string s2(b % 10, 'v');
        s = s1 + s2 + '.' + s;
    }
    cout << s << endl;
    return 0;
}
