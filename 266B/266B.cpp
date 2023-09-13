#include <iostream>
#include <string>

int main()
{
    int n, t;
    std::cin >> n >> t;

    std::string s;
    std::cin >> s;

    int j = 1;
    while(j <= t)
    {
        int i = 0;
        while(i < n - 1)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
            i++;
        }
        j++;
    }

    int i = 0;
    while(i < n)
    {
        std::cout << s[i++];
    }

    std::cout << std::endl;

    return 0;
}
