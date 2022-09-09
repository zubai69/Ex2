﻿#include <iostream>
#include <math.h>

void konus() {
    double r, h, l, R;
    const double pi = 3.1415;
    std::cout << "Введите радиус основания:\n";
    std::cin >> R;
    std::cout << "Введите радиус усеченной окружности:\n";
    std::cin >> r;
    std::cout << "Введите высоту:\n";
    std::cin >> h;
    std::cout << "Введите длину образующей:\n";
    std::cin >> l;
    double S = pi * (R * R + (R + r) * l + r * r);
    double V = pi * h * (R * R + r * R + r * r)/3;
    std::cout << "Объем усеченного конуса:\n" << V << std::endl;
    std::cout << "Площадь усеченного конуса:\n" << S << std::endl;
}

void razv() {
    double x, a, w = 0;
    std::cout << "Введите x:" << std::endl;
    std::cin >> x; 
    std::cout << "Введите a:" << std::endl;
    std::cin >> a;
    if (x == 0) {
        std::cout << "Нет решений"<<std::endl;
    }
    else if (x < 1 && x > -1) {
        w = a * log(abs(x));
        std::cout << "w = " << w << std::endl;
    }
    else if(a>=x*x) {
        w = sqrt(a - x * x);
        std::cout << "w = " << w << std::endl;
    }
    else {
        std::cout << "Нет решений"<<std::endl;
    }
}

void func() {
    double x, y, b;
    std::cout << "Введите x:" << std::endl;
    std::cin >> x;
    std::cout << "Введите y:" << std::endl;
    std::cin >> y;
    std::cout << "Введите b:" << std::endl;
    std::cin >> b;
    double z;
    if (b - y > 0 && b - x >= 0) {
        std::cout << "z = " << log(b - y) * sqrt(b - x)<<std::endl;
    }
    else {
        std::cout << "Нет решений"<<std::endl;
    }
}

void por() {
    int n;
    std::cout << "Введите N:" << std::endl;
    std::cin >> n;
    int i = 0;
    while (i < 10) {
        std::cout << n + i << std::endl;
        i += 1;
    }
}

void tab() {
    for (double x = -4; x <= 4; x += 0.5) {
        if (x != 1) {
            double y = (x * x - 2 * x + 2) / (x - 1);
            std::cout << y << std::endl;
        }
        else {
            std::cout << "Нельзя вычислить" << std::endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");
    tab();
    return 0;
}