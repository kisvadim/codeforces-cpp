#include <iostream>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    std::string abc = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < n; i++)
    {
        char c = tolower(s[i]);
        abc.erase(std::remove(abc.begin(), abc.end(),
                    c), abc.end());
    }

    if(abc.size() == 0)
        std::cout << "YES" << std::endl;
    else 
        std::cout << "NO" << std::endl;

    return 0;
}
