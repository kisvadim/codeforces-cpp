#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s, t;
    std::cin >> s >> t;

    std::reverse(s.begin(), s.end());
    if(s == t)
        std::cout << "YES";
    else
        std::cout << "NO";

    std::cout << std::endl;

    return 0;
}
