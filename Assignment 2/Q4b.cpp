#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str = "OpenAI";
    reverse(str.begin(), str.end());
    cout << "Reversed String: " << str;
    return 0;
}
