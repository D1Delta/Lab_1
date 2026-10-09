#include <iostream>
#include <windows.h>
#include "heder.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
int choice = -1;
    while (choice != 0) {


        // Ввод выбора меню с проверкой
        while (true) {
            if (std::cin >> choice) {
                break;
            }
            std::cout << "Ошибка: введите число." << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
            std::cout << "Выбор: ";
        }

        switch (choice) {
            // Задание 1
        case 1: {
            double x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x) break;
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << fraction(x) << std::endl;
            break;
        }
        case 3: {
            char x;
            while (true) {
                std::cout << "Введите цифру: ";
                if (std::cin >> x && x >= '0' && x <= '9') break;
                std::cout << "Ошибка: введите цифру от '0' до '9'." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << charToNum(x) << std::endl;
            break;
        }
        case 5: {
            int x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x) break;
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << (is2Digit(x) ? "true" : "false")
                << std::endl;
            break;
        }
        case 7: {
            int a, b, num;
            while (true) {
                std::cout << "Введите a, b, num (через Enter): ";
                if (std::cin >> a >> b >> num) break;
                std::cout << "Ошибка: введите три числа." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << (islnRange(a, b, num) ? "true" : "false")
                << std::endl;
            break;
        }
        case 9: {
            int a, b, c;
            while (true) {
                std::cout << "Введите a, b, c: ";
                if (std::cin >> a >> b >> c) break;
                std::cout << "Ошибка: введите три числа." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << (isEqual(a, b, c) ? "true" : "false")
                << std::endl;
            break;
        }

              //  Задание 2
        case 11: {
            int x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x) break;
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << abs(x) << std::endl;
            break;
        }
        case 13: {
            int x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x) break;
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << (is35(x) ? "true" : "false")
                << std::endl;
            break;
        }
        case 15: {
            int x, y, z;
            while (true) {
                std::cout << "Введите x, y, z: ";
                if (std::cin >> x >> y >> z) break;
                std::cout << "Ошибка: введите три числа." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << max3(x, y, z) << std::endl;
            break;
        }
        case 17: {
            int x, y;
            while (true) {
                std::cout << "Введите x, y: ";
                if (std::cin >> x >> y) break;
                std::cout << "Ошибка: введите два числа." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << sum2(x, y) << std::endl;
            break;
        }
        case 19: {
            int x;
            while (true) {
                std::cout << "Введите день недели (1-7): ";
                if (std::cin >> x && x >= 1 && x <= 7) break;
                std::cout << "Ошибка: введите число от 1 до 7." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            StringDay(x);
            break;
        }

        // Задание 3
        case 21: {
            int x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x && x >= 0) break;
                std::cout << "Ошибка: введите число от 0 до 100." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << listNumbs(x) << std::endl;
            break;
        }
        case 23: {
            int x;
            while (true) {
                std::cout << "Введите x: ";
                if (std::cin >> x && x >= 0) break;
                std::cout << "Ошибка: введите число от 0 до 100." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << chet(x) << std::endl;
            break;
        }
        case 25: {
            long x;
            while (true) {
                std::cout << "Введите число: ";
                if (std::cin >> x) break;
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            std::cout << "Результат: " << numLen(x) << std::endl;
            break;
        }
        case 27: {
            int x;
            while (true) {
                std::cout << "Введите сторону квадрата: ";
                if (std::cin >> x && x >= 1) break;
                std::cout << "Ошибка: введите число от 1 до 20." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            square(x);
            break;
        }
        case 29: {
            int x;
            while (true) {
                std::cout << "Введите высоту: ";
                if (std::cin >> x && x >= 1) break;
                std::cout << "Ошибка: введите число от 1 до 20." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }
            rightTriangl(x);
            break;
        }

        // Задание 4
        case 31: {
            int n;
            std::cout << "Сколько чисел? ";
            while (!(std::cin >> n) || n < 0 || n > 99) {
                std::cout << "Ошибка: введите число от 0 до 99." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }

            int arr[7];
            std::cout << "Введите " << n << " чисел: ";
            for (int i = 0; i < n; ++i) {
                while (!(std::cin >> arr[i])) {
                    std::cout << "Ошибка: введите число." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(7, '\n');
                }
            }
            arr[n] = 0;

            int x;
            std::cout << "Что искать? ";
            while (!(std::cin >> x)) {
                std::cout << "Ошибка: введите число." << std::endl;
                std::cin.clear();
                std::cin.ignore(7, '\n');
            }

            std::cout << "Индекс: " << findFirst(arr, x) << std::endl;
            break;
        }
        case 33: {
            int n;
            std::cout << "Сколько чисел? ";
            while (!(std::cin >> n) || n < 1 || n > 99) {
                std::cout << "Ошибка: введите число от 1 до 99." << std::endl;
                std::cin.clear();
                std::cin.ignore(100, '\n');
            }

            int arr[7];
            std::cout << "Введите " << n << " чисел: ";
            for (int i = 0; i < n; ++i) {
                while (!(std::cin >> arr[i])) {
                    std::cout << "Ошибка: введите число." << std::endl;
                    std::cin.clear();
                    std::cin.ignore(7, '\n');
                }
            }
            arr[n] = 0;

            std::cout << "Результат: " << maxAds(arr) << std::endl;
            break;
        }

        case 0:
            std::cout << "Выход." << std::endl;
            break;

        default:
            std::cout << "Неверный пункт меню." << std::endl;
            break;
        }
    }

    return 0;

}