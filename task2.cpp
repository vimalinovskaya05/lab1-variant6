#include <iostream>

int main() {
    int n;
    std::cout << "Введите положительное целое число n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Ошибка: число должно быть положительным.\n";
        return 1;
    }

    int remainder = n % 2;
    int last_digit = n % 10;

    std::cout << "n % 2 = " << remainder << "\n";
    std::cout << "Число " << (remainder == 0 ? "чётное" : "нечётное") << "\n";
    std::cout << "Последняя цифра (n % 10) = " << last_digit << "\n";

    return 0;
}