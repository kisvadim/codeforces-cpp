#include <iostream>

int main()
{
    int n, h;
    std::cin >> n >> h;

    int i = 0;
    int width = 0;
    while(i < n)
    {
        int a;
        std::cin >> a;

        if(a <= h)
            width += 1;
        else
            width += 2;

        i++;
    }

    std::cout << width << std::endl;
    return 0;
}
