//
// Created by ficon on 20.03.18.
//

#ifndef JIMP_EXERCISES_SQUARE_H
#define JIMP_EXERCISES_SQUARE_H

#include <Point.h>

namespace geometry {
    class Square {
    public:
        Square(Point a, Point b, Point c, Point d);
        double Circumference()const;
        double Area()const;


    private:
        Point a_, b_, c_, d_;
    };
}

#endif //JIMP_EXERCISES_SQUARE_H
