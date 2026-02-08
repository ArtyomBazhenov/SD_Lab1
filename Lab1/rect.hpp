#pragma once
#include <iostream>

class Rect {
public:
    int top, left, bottom, right;
    //Объявления
    Rect(); // Конструктор по умолчанию
    Rect(int t, int l, int b, int r); // Конструктор с параметрами
    ~Rect(); // Деструктор
};

