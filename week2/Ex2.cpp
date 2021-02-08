#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int N;
    string s;
    cin >> N;
    if (N % 4 == 0 && N % 100 != 0) s = "YES";
    else if (N % 400 == 0) s = "YES";
    else s = "NO";
    cout << s << endl;
    return 0;
}
