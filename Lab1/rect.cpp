#include "rect.hpp"
#include <iostream>
//Конструктор по умолчанию
Rect::Rect() {
    top = 0;
    left = 0;
    bottom = 0;
    right = 0;
}
//Конструктор с параметрами
Rect::Rect(int t, int l, int b, int r) {
    top = t;
    left = l;
    bottom = b;
    right = r;
}
//Деструктор
Rect::~Rect() {
    std::cout << "Destructor called for Rect: " << top << " " << left << std::endl;
}
