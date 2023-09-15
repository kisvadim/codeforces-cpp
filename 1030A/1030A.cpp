#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int i = 0;
    int answers = 0;
    while(i < n)
    {
        int a;
        std::cin >> a;

        answers += a;

        i++;
    }

    if(answers == 0)
    {
        std::cout << "EASY";
    }
    else {
        std::cout << "HARD";
      }

    std::cout << std::endl;

    return 0;
}
