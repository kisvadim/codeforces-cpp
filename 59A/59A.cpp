#include <iostream>
#include <string>
#include <cctype>

int main()
{
    std::string s;
    std::cin >> s;

    int lower = 0;
    int upper = 0;

    for(size_t i = 0; i < s.size(); i++)
        if(islower(s[i]))
            lower += 1;
        else    
            upper += 1;

    for(size_t i = 0; i < s.size(); i++)
    {
        if (lower == upper)
            s[i] = tolower(s[i]);
        else if (lower < upper && islower(s[i]))
            s[i] = toupper(s[i]);
        else if (lower > upper && isupper(s[i]))
            s[i] = tolower(s[i]);
    }

    std::cout << s << std::endl;
    return 0;
}
