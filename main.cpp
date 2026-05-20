#include <iostream>
#include <cmath>

class Vector {
public:
    Vector();
    Vector(double x, double y);

    double distance_to(Vector vector);
    double distance_to(double x, double y);

    double getX();
    void setX(double x);

    double getY();
    void setY(double y);
private:
    double x;
    double y;
};

Vector::Vector() {
    x = 0.0;
    y = 0.0;
}

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector::distance_to(Vector vector) {
    double diff_x = this->x - vector.getX();
    double diff_y = this->y - vector.getY();
    return sqrt(diff_x * diff_x + diff_y * diff_y);
}

double Vector::distance_to(double x, double y) {
    double diff_x = this->x - x;
    double diff_y = this->y - y;
    return sqrt(diff_x * diff_x + diff_y * diff_y);
}

double Vector::getX() { return x; }
void Vector::setX(double x) { this->x = x; }

double Vector::getY() { return y; }
void Vector::setY(double y) { this->y = y; }

int main() {
    return 0;
}