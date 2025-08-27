#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100] = "Hello ";
    char str2[] = "World!";
    strcat(str1, str2);
    cout << "Concatenated String: " << str1;
    return 0;
}
