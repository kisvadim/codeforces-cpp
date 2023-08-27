#include <iostream>
#include <string.h>

int main()
{
    std::string s1, s2;
    std::cin >> s1 >> s2;

    int result = strcasecmp(s1.c_str(), s2.c_str());

    if (result < 0) result = -1;
    else if (result > 0) result = 1;

    std::cout << result << std::endl;

    return 0;
}
