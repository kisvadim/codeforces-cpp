#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> s;

    for(int i = 0; i < 4; i++)
    {
        int t;
        std::cin >> t;

        if(std::find(s.begin(), s.end(), t) == s.end())
            s.push_back(t);
    }

    std::cout << 4 - s.size() << std::endl;

    return 0;
}
