#pragma once
class Rect {
public:
    int top, left, bottom, right;
    Rect(int t,int l,int b,int r){
        top = t;
        left = l;
        bottom = b;
        right = r;
    }
    // Конструктор по умолчанию (Задание 1.3, часть 3)
    Rect() {
        top = 0;
        left = 0;
        bottom = 0;
        right = 0;
    }
};
