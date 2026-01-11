#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main() {
    int num;
    cin >> num;
    while(num--) {
        string word;
        cin >> word;
        if(word.length() > 10) {
            cout << word[0] << word.length() - 2 << word[word.length() - 1];
        } else {
            cout << word;
        }
        cout << "\n";
    }
    return 0;
}