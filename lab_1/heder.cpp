#include <iostream>
#include "heder.h"



double fraction(double x) {
    int part = static_cast<int>(x);
    double frac_part = x - part;
    return frac_part;
}

int charToNum(char x) {
    x = x - '0';
    return x;
}

bool is2Digit(int x) {
    int i = 0;
    while (x != 0) {
        x = x / 10;
        i++;
    }
    if (i == 2) {
        return true;
    }
    return false;
}

bool islnRange(int a, int b, int num) {
    int max, min;
    if (a > b) {
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }
    if (num < max && num > min) {
        return true;
    }
    else {
        return false;
    }
}

bool isEqual(int a, int b, int c) {
    if (a == b && a == c && b == c) {
        return true;
    }
    else {
        return false;
    }
}

int abs(int a) {
    if (a < 0) {
        return a*(-1);
    }
    else {
        return a;
    }
}

bool is35(int x) {
    if (x%3 == 0 && x%5 == 0) {
        return false;
    }
    if (x%5 == 0) {
        return true;
    }
    if (x%3 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int max3(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    }
    else if (y >= x && y >= z) {
        return y;
    }
    else {
        return z;
    }
}

int sum2(int x, int y) {
    int n = x + y;
    if (n>= 10 && n<= 20) {
        return 20;
    }
    else {
        return n;
    }
}

void StringDay(int x) {
    switch (x) {
        case 1:
            std::cout << "Понедельник" << std::endl;
            break;
        case 2:
            std::cout << "вторник" << std::endl;
            break;
        case 3:
            std::cout << "Среда" << std::endl;
            break;
        case 4:
            std::cout << "Четверг" << std::endl;
            break;
        case 5:
            std::cout << "Пятница" << std::endl;
            break;
        case 6:
            std::cout << "Суббота" << std::endl;
            break;
        case 7:
            std::cout << "Воскресенье" << std::endl;
            break;
        default:
            std::cout << "это не день недели"  << std::endl;
            break;

    }
}

std::string listNumbs(int x) {
    std::string s;
    for (int i = 0; i <= x; ++i) {
        s = s + " " + std::to_string(i);
    }
    return s;
}

std::string chet(int x) {
    std::string s;
    for (int i = 0; i <= x; i += 2) {
        s = s + " " + std::to_string(i);
    }
    return s;
}

int numLen(long x) {
    int i = 0;
    for (i; x > 0 ; ++i) {
        x = x / 10;
    }
return i;
}

void square(int x) {
    for (int i = 0; i < x; ++i) {
       std::cout << std::string(x, '*') << std::endl;
    }
}

void rightTriangl(int x) {
    for (int i = 1; i <= x; ++i) {
        std::cout  << std::string(x-i, ' ') << std::string(i, '*') << std::endl;
    }
}

int findFirst(int (&arr)[7], int x) {
    int n = std::size(arr);
    for (int i = 0; i <= std::size(arr); ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int maxAds(int (&arr)[7]) {
    int max = arr[0];
    int n = std::size(arr);
    for (int i = 0; i <= n; ++i) {
        if (arr[i] < 0) {
            arr[i] *= -1;
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int* add(int (&arr)[5], int (&ins)[3], int pos) {
    int n = std::size(arr);
    int ni = std::size(ins);
    int newSize = n+ni;
    int * newArr = new int[newSize];
    int id = 0;
    for (int i = 0; i < pos; ++i) {
        newArr[id++] = arr[i];
    }
    for (int i = 0; i < ni; ++i) {
        newArr[id++] = ins[i];
    }
    for (int i = pos; i < n; ++i) {
        newArr[id++] = arr[i];
    }
    for (int i = 0; i < newSize; ++i) {
        std::cout << newArr[i] << " ";
    }
    return newArr;
    delete[] newArr;
}

int* reverseBack(int (&arr)[5]) {
    int n = std::size(arr);
    int* newArr = new int[n];
    for (int i = 0; i < n; i++) {
        newArr[i] = arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++) {
        std::cout << newArr[i] << " ";
    }
}

int* findAll(int arr[], int size, int x) {
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            count++;
        }
    }

    int* result = new int[count + 1];


    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) {
            result[index++] = i;
        }
    }

    result[index] = -1;
    for (int i = 0; i < count; ++i) {
        std::cout << result[i] << " ";
    }
    return result;
}
