#include <iostream>

int integerDivision(int num, int den);

int main() {
    const int a(50); const int b(25);
    std::cout << "Starting up.." << std::endl;
    for (int i = 0; i<=25; ++i) {
        const int result =  integerDivision(a, b-i);
        std::cout << "  result = " << result <<  std::endl;
    }
    std::cout << "Completed.." << std::endl;
    return 0;
}

int integerDivision(int a, int b) {
    return a / b;
}
