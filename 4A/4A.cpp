#include <iostream>

int main()
{
    int w;

    std::cin >> w;

    if((w < 4) || (w % 2 != 0))
        std::cout << "NO\n";
    else    
        std::cout << "YES\n";

    return 0;
}
