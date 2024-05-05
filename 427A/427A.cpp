#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    
    int events[n];
    for(int i = 0; i < n; ++i)
        std::cin >> events[i];

    int policemen_count = 0;
    int crime_count = 0;

    for(int i = 0; i < n; ++i)
    {
        if(events[i] == -1)
        {
            if(policemen_count > 0)
                policemen_count -= 1;
            else
                crime_count += 1;
        }
        else
        {
            policemen_count += events[i];
        }        
    }

    std::cout << crime_count << std::endl;

    return 0;
}