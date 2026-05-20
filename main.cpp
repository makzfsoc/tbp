#include <iostream>
#include <cmath>

const double G = 6.67E-11;

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

class Body {
public:
    Body();
    Body(double mass, Vector position);

    double get_mass();
    void set_mass(double mass);

    Vector get_position();
    void set_position(Vector position);
private:
    double mass;
    Vector position;
};

Body::Body() {
    mass = 1.0;
    position = Vector();
}

Body::Body(double mass, Vector position) {
    this->mass = mass;
    this->position = position;
}

double Body::get_mass() { return mass; }
void Body::set_mass(double mass) { this->mass = mass; }

Vector Body::get_position() { return position; }
void Body::set_position(Vector position) { this->position = position; }

int main() {
    return 0;
}