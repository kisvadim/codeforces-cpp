#include <iostream>

int main()
{
    // f(n) = -1 + 2 -3 + ... + (-1)^n * n
    // n = 1 f(1) = -1
    // n = 2 f(2) = 1
    // n = 3 f(3) = 1 - 3 = -2
    // n = 4 f(4) = -2 + 4 = 2
    // n = 5 f(5) = -3
    // n = 6 f(6) = -3 + 6 = 3      
    unsigned long long int n;
    std::cin >> n;
    
    if(n % 2 == 0)
        std::cout << n / 2 << std::endl;
    else
        std::cout << "-" << (n + 1) / 2 << std::endl;

    return 0;
}
