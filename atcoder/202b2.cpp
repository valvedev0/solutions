#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string S;
    std::cin >> S;
    std::reverse(S.begin(), S.end());
    for (const auto c: S) {
        if (c == '6') std::cout << '9';
        else if (c == '9') std::cout << '6';
        else std::cout << c;
    }
    std::cout << '\n';
    return 0;
}