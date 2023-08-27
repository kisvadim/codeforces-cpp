#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::cin >> s;

    int count_4 = std::count(s.begin(), s.end(), '4');
    int count_7 = std::count(s.begin(), s.end(), '7');
    int happy_digits = count_4 + count_7;    

    if(happy_digits == 4 || happy_digits == 7)
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;

    return 0;
}
