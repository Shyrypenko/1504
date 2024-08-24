#include <iostream>
#include <cmath>

//1
int cube(int number) {
    return number * number * number;
}

int main() {
    int num;
    std::cout << "Введите число: ";
    std::cin >> num;

    std::cout << "Куб числа " << num << " равен " << cube(num) << std::endl;

    return 0;
}

//2
int max(int a, int b) {
    return (a > b) ? a : b;
}

//3
bool isPositive(int number) {
    return number > 0;
}

//4

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int subtract(int a, int b) {
    return a - b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    else {
        std::cerr << "Ошибка: деление на ноль!" << std::endl;
        return 0;
    }
}

void performOperation(int a, int b, char operation) {
    switch (operation) {
    case '+':
        std::cout << "Результат сложения: " << add(a, b) << std::endl;
        break;
    case '*':
        std::cout << "Результат умножения: " << multiply(a, b) << std::endl;
        break;
    case '-':
        std::cout << "Результат вычитания: " << subtract(a, b) << std::endl;
        break;
    case '/':
        std::cout << "Результат деления: " << divide(a, b) << std::endl;
        break;
    default:
        std::cout << "Недопустимая операция!" << std::endl;
        break;
    }
}

//5
void printRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

//6
bool isPrime(int number) {
    if (number <= 1) return false;
    if (number <= 3) return true;
    if (number % 2 == 0 || number % 3 == 0) return false;
    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) return false;
    }
    return true;
}

//7
int factorial(int number) {
    if (number <= 1) return 1;
    return number * factorial(number - 1);
}

//8
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

//9
int sumRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

//10
bool isPerfect(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

void findPerfectNumbers(int start, int end) {
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            std::cout << i << " является совершенным числом." << std::endl;
        }
    }
}
