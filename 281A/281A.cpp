#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::cin >> s;

    s[0] = toupper(s[0]);

    std::cout << s << std::endl;

    return 0;
}
