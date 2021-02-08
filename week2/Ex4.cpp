#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int a;
    string s;
    cin >> a;
    while (a % 2 == 0){
        a /= 2;
    }
    if (a == 1) s = "YES";
    else s = "NO";
    cout << s << endl;
    return 0;
}
