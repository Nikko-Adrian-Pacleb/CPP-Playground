#include <iostream>

constexpr int addItems(int x, int y) {
        return x + y;
    }

int main() {
    int y {20};
    int x = 10;
    int z;
    auto autovariable = true;
    std::cout << "Value of autovariable:" << autovariable << std::endl;
    std::cout << "Value of y:" << y << std::endl;
    std::cout << "Value of x:" << x << std::endl;
    std::cout << "Enter value of z:";
    std::cin >> z;
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl;
    constexpr int constantexprvariable = addItems(1, 2);
    std::cout << constantexprvariable << std::endl;
    return 0;
}
