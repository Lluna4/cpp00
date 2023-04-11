#include <iostream>
#include <string>

int main(int argc, char **argv)
{
  int index = 0;
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else
  {
    argv++;
    while (*argv)
    {
      index = 0;
      std::string str(*argv);
      while (str[index])
      {
        str[index] = std::toupper(str[index]);
        index++;
      }
      std::cout << str;
      argv++;
    }
    std::cout << std::endl;
  }
}
