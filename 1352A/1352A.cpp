#include <iostream>
#include <string>
#include <cmath>

bool isRound(int a)
{
    if(a < 10)
        return true;
    else
    {
        std::string s = std::to_string(a);
        for(size_t i = 1; i < s.size(); ++i)
        {
            if(s[i] != '0')
                return false;
        }
        return true;
    }
}

int main()
{
    int t;
    std::cin >> t;

    for(int i = 0; i < t; ++i)
    {
        int number;
        std::cin >> number;

        if(isRound(number))
            std::cout << 1 << std::endl << number << std::endl;
        else 
        {
            // 9876 = 9*10^3 + 800 + 70 + 6
            std::string s = std::to_string(number);
            std::string result = "";
            int power = std::log10(number);
            int add_count = 0;
            // '0' - 48
            // '1' - 49
            // '9'

            int j = power;
            while(j >= 0)
            {
                int digit = s[power - j] - '0';
                if(digit != 0)
                {
                    int r = std::pow(10, j)*digit;
                    result += std::to_string(r) + " ";
                    add_count++;
                }                

                j--;
            }

            std::cout << add_count << std::endl;
            std::cout << result << std::endl;
        }
    }
    return 0;
}