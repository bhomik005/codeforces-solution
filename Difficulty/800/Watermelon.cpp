#include <iostream>
using std::cout;
using std::cin;

// O(1) time | O(1) space
int main() {
    int w;
    cin >> w;
    if(w > 2 && w % 2 == 0) cout << "YES";
    else cout << "NO";
    cout << "\n";
    return 0;
}