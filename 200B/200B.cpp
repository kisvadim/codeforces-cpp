#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int sum_p = 0;
    for(int i = 0; i < n; i++)
    {
        int p;
        std::cin >> p;
        sum_p += p;
    }

    double v = (double)sum_p / n;
    std::cout << v << std::endl;

    return 0;
}
