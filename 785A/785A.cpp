#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int edges_count = 0;

    for(int i = 0; i < n; i++)
    {
        std::string s;
        std::cin >> s;
        if(s == "Tetrahedron")
            edges_count += 4;
        else if(s == "Cube")
            edges_count += 6;
        else if(s == "Octahedron")
            edges_count += 8;
        else if(s == "Dodecahedron")
            edges_count += 12;
        else if(s == "Icosahedron")
            edges_count += 20;
    }

    std::cout << edges_count << std::endl;
    return 0;
}
