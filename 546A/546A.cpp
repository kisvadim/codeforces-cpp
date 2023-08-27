#include <iostream>

int main()
{
    int k, n, w;
    std::cin >> k >> n >> w;    
    int total_price = k * ((1+w)*w / 2);
    if (n >= total_price)
        std::cout << 0 << std::endl;
    else    
        std::cout << total_price - n << std::endl;
    return 0;
}
