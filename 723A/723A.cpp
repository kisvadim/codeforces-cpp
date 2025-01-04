#include <iostream>
#include <vector>
#include <bits/stdc++.h>

int main()
{
    std::vector<int> v;

    for(int i = 0; i < 3; i++)
    {
        int t;
        std::cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end());

    std::cout << v[2] - v[0] << std::endl;

    return 0;
}