#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int stones_to_remove = 0;
    for(int i = 0; i < n - 1; i++)
        if(s[i] == s[i+1])
            stones_to_remove += 1;

    std::cout << stones_to_remove << std::endl;

    return 0;
}
