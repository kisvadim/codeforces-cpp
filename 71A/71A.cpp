#include <iostream>
#include <string>

int main()
{
    int n;
    std::string s;

    std::cin >> n;

    for(int i = 0; i < n; i++)
    {
        std::cin >> s;
        if(s.size() > 10)
            std::cout << s[0] << s.size() - 2 << s[s.size() - 1] << std::endl;
        else    
            std::cout << s << std::endl;
    }

    return 0;
}
