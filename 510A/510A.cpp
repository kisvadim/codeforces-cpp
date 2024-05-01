#include <iostream>

int main()
{
    int n, m;
    std::cin >> n >> m;

    int k = 0;

    for(int i = 0; i < n; ++i)
    {
        if(i % 2 == 0)
        {
            std::string s = "";
            for(int j = 0; j < m; j++)
            {
                s += "#";
            }
            std::cout << s << std::endl;
        }
        else
        {
            if(k % 2 == 0)
            {                
                std::string s = "";
                for(int j = 0; j < m - 1; j++)
                {
                    s += ".";
                }
                s += "#";
                std::cout << s << std::endl;
            }
            else
            {
                std::string s = "#";
                for(int j = 0; j < m - 1; j++)
                {
                    s += ".";
                }                
                std::cout << s << std::endl;
            }
            k++;
        }
    }

    return 0;
}