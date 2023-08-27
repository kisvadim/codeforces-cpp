#include <iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;

    int i = 0;
    while (i < k)
    {
        if (n % 10 != 0)
            n -= 1;
        else   
            n /= 10;
        i++;    
    }
    std::cout << n << std::endl;
    return 0;
}
