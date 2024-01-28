#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;

    std::vector<bool> v(d);

    int index_k = k - 1;
    int index_l = l - 1;
    int index_m = m - 1;
    int index_n = n - 1;

    int i = 0;
    while(i < d)
    {
        if(index_k <= d - 1)
            v[index_k] = true;
        if(index_l <= d - 1)
            v[index_l] = true;
        if(index_m <= d - 1)
            v[index_m] = true;
        if(index_n <= d - 1)
            v[index_n] = true;

        index_k += k;
        index_l += l;
        index_m += m;
        index_n += n;
        i++;
    }

    int injured_dragons = std::count(v.begin(),
            v.end(), true);

    std::cout << injured_dragons << std::endl;

    return 0;
}
