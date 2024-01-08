#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    size_t n;
    std::cin >> n;

    std::vector<int> v;

    for(int j = 0; j < 2; j++)
    {
        int p;
        std::cin >> p;

        for(int i = 0; i < p; i++)
        {
            int a;
            std::cin >> a;
            if(std::find(v.begin(), v.end(), a) == v.end())
                v.push_back(a);
        }              
    }

    if(v.size() == n)
    {
        std::cout << "I become the guy." << std::endl;
    }
    else 
    {
        std::cout << "Oh, my keyboard!" << std::endl;
    }

    return 0;
}
