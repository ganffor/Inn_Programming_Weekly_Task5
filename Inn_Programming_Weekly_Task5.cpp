#include <iostream>
#include <windows.h>

char input;

int main()
{
    std::cout << "Enter a single character:" << std::endl;
    std::cin >> input;


    std::cout << "     1   2   3   4   5   6     " << std::endl;
    std::cout << "    --- --- --- --- --- ---    " << std::endl;
    std::cout << "A  | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " |  A" << std::endl;
    std::cout << "    --- --- --- --- --- ---    " << std::endl;
    std::cout << "B  | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " |  B" << std::endl;
    std::cout << "    --- --- --- --- --- ---    " << std::endl;
    std::cout << "C  | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " |  C" << std::endl;
    std::cout << "    --- --- --- --- --- ---    " << std::endl;
    std::cout << "D  | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " | " << "\033[31m" << input << "\033[37m" << " |  D" << std::endl;
    std::cout << "    --- --- --- --- --- ---    " << std::endl;
    std::cout << "     1   2   3   4   5   6     " << std::endl;
}
