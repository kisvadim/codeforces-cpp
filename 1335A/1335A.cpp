#include <iostream>

int main()
{
    int t;
    std::cin >> t;

    for(int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;

        if(n <= 2)
            std::cout << 0 << std::endl;
        else
        {
            if(n % 2 == 0)
                std::cout << (n / 2 - 1) << std::endl;
            else 
                std::cout << n / 2 << std::endl;
            // n = 4 (b = 1, a = 3) v = 1
            // n = 5 (b = 1, a = 4)
            //       (b = 2, a = 3) v = 2
            // n = 6 (b = 1, a = 5)
            //       (b = 2, a = 4) v = 2
            // n = 7 (b = 1, a = 6)
            //       (b = 2, a = 5)
            //       (b = 3, a = 4) v = 3
            // n = 8 (b = 1, a = 7)
            //       (b = 2, a = 6)
            //       (b = 3, a = 5) v = 3
            // n = 9 (b = 1, a = 8)
            //       (b = 2, a = 7)
            //       (b = 3, a = 6)
            //       (b = 4, a = 5) v = 4
        }
    }

    return 0;
}
