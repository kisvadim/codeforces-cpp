#include <iostream>
#include <string>

int main()
{
    int y;
    std::cin >> y;

    while(++y < 10000)
    {
        std::string s = std::to_string(y);
        if(s[0] != s[1] &&
           s[0] != s[2] &&
           s[0] != s[3] &&
           s[1] != s[2] &&
           s[1] != s[3] &&
           s[2] != s[3])
        {
            std::cout << y << std::endl;
            break;
        }
    }

    return 0;
}
