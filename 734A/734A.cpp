#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    int count_A = std::count(s.begin(), s.end(), 'A');
    int count_D = std::count(s.begin(), s.end(), 'D');

    if(count_A > count_D)
        std::cout << "Anton";
    else if(count_D > count_A)
        std::cout << "Danik";
    else
        std::cout << "Friendship";

    std::cout << std::endl;

    return 0;
}
