#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int tasks_released = 0;

    for(int i = 0; i < n; i++)
    {
        int a1, a2, a3;
        std::cin >> a1 >> a2 >> a3;

        if((a1 + a2 + a3) >= 2)
            tasks_released += 1;
    }

    std::cout << tasks_released << std::endl;

    return 0;
}
