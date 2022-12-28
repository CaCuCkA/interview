#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

static string solution(string binary);
static string helper(string binary);

int main() {
    string binary;
    cin >> binary;

    cout << solution(binary) << std::endl;

    return 0;
}

static string solution(string binary) {
    size_t i = 0;
    string s;
    while (i < binary.size() && binary[i] == '1') {
        s += binary[i];
        ++i;
    }
    return s + helper(binary.substr(i));
}

static string helper(string binary) {
    int ones = 0;
    for (char c: binary)
        if (c == '1')
            ++ones;

    string s;
    for (int i = 0; i < std::max(0, (int)binary.size() - ones - 1); ++i)
        s += '1';

    if (binary.size())
        s += '0';

    for (size_t i = 0; i < ones; ++i)
        s += '1';

    return s;
}