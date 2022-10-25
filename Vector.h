//
// Created by Madzia on 20.10.2022.
//

#ifndef MATMA1_VECTOR_H
#define MATMA1_VECTOR_H

class Vector
{
public:
    float x = 0.0;
    float y = 0.0;
    float z = 0.0;

    Vector();
    Vector(float x, float y, float z);
    Vector(Vector p1, Vector p2);

    float getX() const;
    float getY() const;
    float getZ() const;

    ~Vector();

    void add(Vector v);
    void sub(Vector v);
    void multiply(float f);
    float length();
    void normalize();
    void dot(Vector v1, Vector v2);
    void cross(Vector v1, Vector v2);
    void setVector(float x1, float y1, float z1);

};

#endif //MATMA1_VECTOR_H
