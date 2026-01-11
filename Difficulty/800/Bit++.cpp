#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
    int n;
    int x = 0;
    cin >> n;
    while(n--) {
        string operation;
        cin >> operation;
        if(operation == "++X" || operation == "X++") x++;
        else x--;
    }
    cout << x << "\n";
    return 0;
}