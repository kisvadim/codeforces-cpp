#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int presents[n];
    for(int i = 0; i < n; i++)
    {
        int p;
        std::cin >> p;

        presents[p - 1] = i;        
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << presents[i] + 1 << " ";
    }

    std::cout << std::endl;
    return 0;
}
