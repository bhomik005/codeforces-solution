#include <iostream>

using std::cin;
using std::cout;

int main() {
    int num;
    int ans = 0;
    cin >> num;
    while(num--) {
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b + c) >= 2) ans++;
    }
    cout << ans << "\n";
    return 0;
}