#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << '*' ;
        }
        cout << endl;
    }
    return 0;
}
