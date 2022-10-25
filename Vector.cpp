#include "Vector.h"
#include <iostream>
#include <cmath>

Vector::Vector() {
}

Vector::Vector(Vector p1, Vector p2) {
}

Vector::~Vector() {
}

float Vector::getX() const {
    return x;
}

float Vector::getY() const {
    return y;
}

float Vector::getZ() const {
    return z;
}

Vector::Vector(float x, float y, float z) : x(x), y(y), z(z) {}

void Vector::setVector(float x1, float y1, float z1) {
    this->x = x1;
    this->y = y1;
    this->z = z1;
}

// ================ OPERACJE ======================

void Vector::add(Vector v) {
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
}

void Vector::sub(Vector v) {
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
}

void Vector::multiply(float f) {
    this->x *= f;
    this->y *= f;
    this->z *= f;
}

float Vector::length() {
    return sqrt(this->x * this->x +
                this->y * this->y +
                this->z * this->z);
}

void Vector::normalize() {
    float l = this->length();
    if(l!=0) {
        this->multiply(1/l);
    }
    else std::cout << "Nie mozna dzielic przez 0!" << std::endl;
}

// iloczyn skalarny
void Vector::dot(Vector v1, Vector v2) {
    this->x = v1.x * v2.x;
    this->y = v1.y * v2.y;
    this->z = v1.z * v2.z;
}

// iloczyn wektorowy
void Vector::cross(Vector v1, Vector v2) {
    this->x = v1.y * v2.z - v1.z * v2.y;
    this->y = v1.z * v2.x - v1.x * v2.z;
    this->z = v1.x * v2.y - v1.y * v2.x;
}
