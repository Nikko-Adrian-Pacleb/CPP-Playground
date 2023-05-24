# Managing Arrays And Strings

## What is an Array

Array is a collection of elements

```cpp
int intArray[5] = { 1, 2, 3, 4, 5};

std::cout << intArray[0] << std::endl; // Output: 1
std::cout << intArray[1] << std::endl; // Output: 2
```

Index of Array always start at 0

## Declaring and Initializing Static Arrays

```cpp
int myArray[5] = {1, 2, 3, 4, 5}; // Initialize Array with values
int myArray[5] = {} // Initialize all values to 0
int myArray[5] = {1, 2} // Partial initialization of array (rest 0)
```

## How Data is stored in an Array

A memory space is occupied by the whole array and this space is evenly(by sizeof datatype)

## Accessing Data Stored in an Array

Elements are accessed based on their index starting at 0

```cpp
int myArray[5] = {1, 2, 3, 4, 5};
std::cout << myArray[0]; // Output: 1
std::cout << = myArray[4]; // Output: 5
```
