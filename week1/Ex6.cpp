#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int N;
    cin >> N;
    for (int i = N; i > 0; i -= 2) {
        for (int j = 0; j < (N - i) / 2; j++) cout << ' ';
        for (int k = 0; k < i; k++) cout << '*';
        for (int j = 0; j < (N - i) / 2; j++) cout << ' ';
        cout << endl;
    }
    return 0;
}
