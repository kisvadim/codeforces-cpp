#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int i = 0;
    int passengers_in_tram = 0;
    int capacity = 0;
    while(i < n)
    {
        int a, b;
        std::cin >> a >> b;
        passengers_in_tram -= a;
        passengers_in_tram += b;
        if (passengers_in_tram > capacity)
            capacity = passengers_in_tram;
        i++;
    }

    std::cout << capacity << std::endl;
    return 0;
}
