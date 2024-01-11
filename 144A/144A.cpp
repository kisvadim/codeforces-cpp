#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v;

    for(int i = 0; i < n; i++)
    {
        int t;
        std::cin >> t;
        v.push_back(t);
    }

    int max_index = std::distance(v.begin(),
            std::max_element(v.begin(), v.end()));

    int swap_count = 0;
    while(max_index >= 1)
    {
        std::iter_swap(v.begin() + max_index - 1,
                       v.begin() + max_index);
        max_index--;
        swap_count++;
    }
    
    // 10 10 58 31 63 40 76
    // 10 10 58 31 63 76 40 [1]
    // 10 10 58 31 76 63 40 [2]
    // 10 10 58 76 31 63 40 [3]
    // 10 10 76 58 31 63 40 [4]
    // 10 76 10 58 31 63 40 [5]
    // 76 10 10 58 31 63 40 [6]

    int min_index = std::distance(v.begin(),
    std::min_element(v.rbegin(), v.rend()).base()) - 1;

    while(min_index < n - 1)
    {
        std::iter_swap(v.begin() + min_index,
                       v.begin() + min_index + 1);
        min_index++;
        swap_count++;
    }

    std::cout << swap_count << std::endl;

    return 0;
}
