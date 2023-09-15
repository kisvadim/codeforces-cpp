#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int i = 0;
    int rooms_count = 0;
    while(i < n)
    {
        int p, q;
        std::cin >> p >> q;

        if(q - p >= 2)
            rooms_count++;

        i++;
    }

    std::cout << rooms_count << std::endl;

    return 0;
}
