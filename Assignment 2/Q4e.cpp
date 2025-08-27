#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string str = "HELLO WORLD";
    for (char &c : str)
        c = tolower(c);

    cout << "Lowercase String: " << str;
    return 0;
}
