#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n, s1, s2,
    average;
    cin >> n;
    s1 = 0;
    s2 = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
        s1 += v[i];
    }
    average = s1 / n;
    for (int i: v){
        if (i > average) s2 += i;
    }
    cout << s2;
    return 0;
}
