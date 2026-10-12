#include <iostream>

int main() {
    double balance;
    double amount;

    std::cout << "Введите баланс на счёте: ";
    std::cin >> balance;
    std::cout << "Введите сумму для снятия: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Отказ: сумма должна быть положительной.\n";
        return 0;
    }
    if (amount > balance) {
        std::cout << "Отказ: недостаточно средств на счёте.\n";
        return 0;
    }
    // Проверка кратности 10 (для целых сумм)
    // Если amount может быть дробным, проверяем что целая часть кратна 10
    long long amount_cents = static_cast<long long>(amount * 100 + 0.5);
    if (amount_cents % 1000 != 0) { // кратность 10.00 -> 1000 копеек
        std::cout << "Отказ: сумма должна быть кратна 10.\n";
        return 0;
    }

    balance -= amount;
    std::cout << "Выдача одобрена. Остаток на счёте: " << balance << "\n";
    return 0;
}