#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int a, b, c;
    cin >> a >> b;
    c = pow(a * a + b * b, 0.5);
    cout << c << endl;
    return 0;
}
