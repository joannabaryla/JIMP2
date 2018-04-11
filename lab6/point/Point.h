// Deklaracja znajduje się w pliku Point.h
#ifndef JIMP_EXERCISES_POINT_H
#define JIMP_EXERCISES_POINT_H
#include <iostream>

class Point {
public:

    //...
    void SetX(double x);
    void SetY(double y);


    //opcjonalna definicja pozwalająca na uzyskanie
    //dostępu do prywatnych pól z wewnątrz definicji
    //funkcji zadeklarowanej poniżej
    //    friend std::istream& operator>>(std::istream &, Point&);
    //...
    void Print();
private:
    double x_, y_;
};

//właściwa deklaracja, przeciążająca
//operator >> dla strumienia wejściowego
//i klasy punkt
std::istream& operator>>(std::istream &is, Point& point);
#endif

