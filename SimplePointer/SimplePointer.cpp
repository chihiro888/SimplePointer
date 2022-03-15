#include <iostream>

int main()
{
    int num = 3;
    int* numPtr = &num;
    int** numDoublePtr = &numPtr;

    std::cout << "num = " << num << std::endl;
    std::cout << "&num = " << &num << std::endl;
    std::cout << "numPtr = " << numPtr << std::endl;
    std::cout << "*numPtr = " << *numPtr << std::endl;
    std::cout << "&numPtr = " << &numPtr << std::endl;
    std::cout << "numDoublePtr = " << numDoublePtr << std::endl;
    std::cout << "*numDoublePtr = " << *numDoublePtr << std::endl;
    std::cout << "**numDoublePtr = " << **numDoublePtr << std::endl;
    std::cout << "&numDoublePtr = " << &numDoublePtr << std::endl;
}