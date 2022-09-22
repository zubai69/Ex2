#define _USE_MATH_DEFINES
#include <iostream>

void konus() {
    double r, h, l, R;
    std::cout << "Введите радиус основания:\n";
    std::cin >> R;
    std::cout << "Введите радиус усеченной окружности:\n";
    std::cin >> r;
    std::cout << "Введите высоту:\n";
    std::cin >> h;
    if (R <= 0 || r <= 0 || h <= 0 || r==R) {
        std::cout << "Неверные данные";
    }
    else {
        l = sqrt((R - r) * (R - r) + h * h);
        double S = M_PI * (R * R + (R + r) * l + r * r);
        double V = M_PI * h * (R * R + r * R + r * r) / 3.0;
        std::cout << "Объем усеченного конуса:\n" << V << std::endl;
        std::cout << "Площадь усеченного конуса:\n" << S << std::endl;
    }
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
    if (n <= 0) {
        std::cout << "N не натуральное";
    }
    else {
        int i = 0;
        while (i < 10) {
            std::cout << n + i << std::endl;
            i += 1;
        }
    }
}

void tab() {
    for (double x = -4; x <= 4; x += 0.5) {
        if (x != 1) {
            double y = (x * x - 2 * x + 2) / (x - 1);
            std::cout <<"x="<< x << "\t  y=" << y << std::endl;
        }
        else {
            std::cout << "x=1\t  Нельзя вычислить" << std::endl;
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    return 0;
}