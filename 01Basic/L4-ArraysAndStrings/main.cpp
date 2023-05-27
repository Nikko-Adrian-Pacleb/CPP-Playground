#include <iostream>

int main() {
    // ## Array intro
    std::cout << "Array intro" << std::endl;
    int myArray[5] = {1, 2, 3, 4, 5};

    std::cout << myArray[0] << std::endl;
    std::cout << myArray[1] << std::endl;
    std::cout << myArray[2] << std::endl;

    // ## Declaring and Initializing Static Arrays
    // ElementType arrayName[constant_number of elements] = {optional initial values};

    // Initializing Array with values
    int myArray2[5] = {1, 2, 3, 4, 5};

    // Initializes all values to 0
    int myArray3[5] = {};

    // Partial initialization (rest 0)
    int myArray4[5] = {1, 2};

    // ## Accessing Data Stored in an Array
    // arrayName[index]
    std::cout << "Accessing Data Stored in an Array" << std::endl;
    int accessArray[5] = {1, 2, 3, 4, 5};
    std::cout << accessArray[0] << std::endl;

    // ## Modifying Data Stored in an Array
    // arrayName[index] = newValue;
    std::cout << "Modifying Data Stored in an Array" << std::endl;
    int modifyArray[5] = {1, 2, 3, 4, 5};
    std::cout << modifyArray[0] << std::endl;
    modifyArray[0] = 10;
    std::cout << modifyArray[0] << std::endl;

    // # Multidimensional Arrays
    // ## Declaring and Initializing Multidimensional Arrays
    // ElementType arrayName[constant_number of rows][constant_number of columns] = {optional initial values};
    std::cout << "Multidimensional Arrays" << std::endl;
    int multiArray[2][3] = {{1, 2, 3}, {4, 5, 6}};
    std::cout << multiArray[0][0] << std::endl;
    std::cout << multiArray[0][1] << std::endl;
    std::cout << multiArray[0][2] << std::endl;
    std::cout << multiArray[1][0] << std::endl;
    std::cout << multiArray[1][1] << std::endl;
    std::cout << multiArray[1][2] << std::endl;

    return 0;
}