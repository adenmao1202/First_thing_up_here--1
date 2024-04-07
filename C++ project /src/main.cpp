#include <iostream>

int main()
{
    char ch;

    std::cout << "Print code (ASCII code / Unicode code etc.) of a given character:\n";
    std::cout << "-----------------------------------------------------------------------\n";

    // Input character
    std::cout << "Input a character: ";
    std::cin >> ch;

    // Output ASCII value
    std::cout << "The ASCII value of " << ch << " is: " << static_cast<int>(ch) << std::endl;

    return 0;
}
