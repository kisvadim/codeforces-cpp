#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    // 1, 5, 10, 20, 100
    int banknote_count = n / 100;

    if(n % 100 != 0)
    {
        n = n - 100 * (n / 100);
        banknote_count += (n / 20);

        if(n % 20 != 0)
        {
            n = n - 20 * (n / 20);
            banknote_count += (n / 10);

            if(n % 10 != 0)
            {
                n = n - 10 * (n / 10);
                banknote_count += (n / 5);

                if(n % 5 != 0)
                {
                    n = n - 5 * (n / 5);
                    banknote_count += n;
                }
            }
        }        
    }

    std::cout << banknote_count << std::endl; 

    return 0;
}
