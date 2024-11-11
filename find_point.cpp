// нахождение точки в области на графике
#include <iostream>
#include <cmath> 

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double x, y, R;


    std::cout << "Введите координаты точки (x, y): ";
    std::cin >> x >> y;
    
    std::cout << "Введите радиус R: ";
    std::cin >> R;

    double distance = sqrt(x * x + y * y);


    if (distance >= R && distance <= 2 * R) {
        std::cout << "Точка находится внутри области." << std::endl;;
    } else {
        std::cout << "Точка не находится внутри области."<< std::endl;;
    }

    return 0;
}