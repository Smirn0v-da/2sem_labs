#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    int n, m, k, y, x;
    cin >> n >> m >> k;
    vector <vector <int>> v(n, vector <int> (m, 0));
    for (int i = 0; i < k; i++){
        cin >> y >> x;
        v[y - 1][x - 1] = -1;
        if (y > 1 && x > 1 && v[y - 2][x - 2] > -1) v[y - 2][x - 2] += 1;
        if (y > 1 && v[y - 2][x - 1] > -1) v[y - 2][x - 1] += 1;
        if (y > 1 && x < m && v[y - 2][x] > -1) v[y - 2][x] += 1;
        if (x > 1 && v[y - 1][x - 2] > -1) v[y - 1][x - 2] += 1;
        if (x < m && v[y - 1][x] > -1) v[y - 1][x] +=1;
        if (y < n && x > 1 && v[y][x - 2] > -1) v[y][x - 2] += 1;
        if (y < n && v[y][x - 1] > -1) v[y][x - 1] += 1;
        if (y < n && x < m && v[y][x] > -1) v[y][x] += 1;
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
