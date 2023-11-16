#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    std::string s;
    std::cin >> s;

    bool is_right_plus_prev = s[1] == '0';
    int islands_count = 1;

    for(int i = 1; i < n; i++)
    {
        std::cin >> s;
        bool is_right_plus_current = s[1] == '0';

        if(is_right_plus_current) // -+
        {
            if(!is_right_plus_prev)
                islands_count++;
        }
        else // +-
        {
            if(is_right_plus_prev)
                islands_count++;
        }
        is_right_plus_prev = is_right_plus_current;
    }   

    std::cout << islands_count << std::endl;

    return 0;
}
