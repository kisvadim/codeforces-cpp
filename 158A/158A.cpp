#include <iostream>

int main()
{
    int n, k;

    std::cin >> n >> k;

    int *a = new int[n];

    for(int i = 0; i < n; i++)
        std::cin >> a[i];

    int members = 0;

    for(int i = 0; i < n; i++)
        if(a[i] >= a[k - 1] && a[i] != 0)
            members += 1;

    delete [] a;

    std::cout << members << std::endl;

    return 0;
}
