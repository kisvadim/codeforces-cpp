#include <iostream>
#include <string>

int main() {
  std::string guest, host, letters;
  std::cin >> guest >> host >> letters;

  while (letters.size() != 0) {
    char c = letters[0];
    std::size_t found_guest = guest.find(c);
    std::size_t found_host = host.find(c);
    if (found_guest != std::string::npos)
      guest.erase(found_guest, 1);
    else if (found_host != std::string::npos)
      host.erase(found_host, 1);
    else
      break;

    letters.erase(0, 1);
  }

  if (letters.empty() && guest.empty() && host.empty())
    std::cout << "YES" << std::endl;
  else
    std::cout << "NO" << std::endl;

  return 0;
}
