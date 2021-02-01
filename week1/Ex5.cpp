#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int N;
    cin >> N;
    for (int j = N;j > 0; j--) {
        for (int i = 0; i < j; i++) {
            cout << '*' ;
        }
        cout << endl;
    }
    return 0;
}
