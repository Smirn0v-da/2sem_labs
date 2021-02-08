#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
    int speed, money;
    string number;
    money = 0;
    while(true){
        cin >> speed;
        cin >> number;
        if (number == "A999AA") break;
        if (speed > 60){
            if (number[1] == number[2] && number[1] == number[3]) money += 1000;
            else if (number[1] == number [2] || number[1] == number [3] || number[2] == number [3]) money += 500;
            else money += 100;
        }
    }
    cout << money << endl;
    return 0;
}
