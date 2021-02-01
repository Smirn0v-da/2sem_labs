#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int i = 0; i < N; i++) {
            cout << '*' ;
        }
        cout << endl;
    }
    return 0;
}
