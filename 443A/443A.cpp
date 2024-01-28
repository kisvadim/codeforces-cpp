#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>

int main()
{
    std::string s;
    std::getline(std::cin, s);

    s.erase(0, 1);
    s.erase(s.size() - 1, 1);

    std::vector<char> v;
    if(s.size() > 0)
    {
        std::stringstream ss(s);
        while(!ss.eof())
        {
            std::string t;
            std::getline(ss, t, ',');
            char c = t.back();

            if(std::find(v.begin(), v.end(), c) == v.end())
                v.push_back(c);
        }
    }

    std::cout << v.size() << std::endl;

    return 0;
}
