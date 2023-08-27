#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

int main()
{
    std::string s;
    std::vector<char> v;
    std::cin >> s;

    for(size_t i = 0; i < s.size(); i++)
        if(std::find(v.begin(), v.end(), s[i]) == v.end())
            v.push_back(s[i]);

   if(v.size() % 2 == 0)
      std::cout << "CHAT WITH HER!" << std::endl;
   else 
      std::cout << "IGNORE HIM!" << std::endl; 

    return 0;
}
