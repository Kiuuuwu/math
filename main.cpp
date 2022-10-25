#include <iostream>
#include <cmath>

#include "Vector.h"

float getAngle(Vector v1, Vector v2) {
    Vector c(0,0,0);
    c.dot(v1, v2);

    float a = c.getX() + c.getY() + c.getZ();
    float b = std::abs(v1.length() * v2.length());
    return acos(a/b) * (180/M_PI);
}

int main()
{
    std::cout << "Podpunkt 1 - przemiennosc dodawania:" << std::endl;
    Vector a(0,3,6);
    std::cout<<"Wektor A = ["<< a.x << ", " << a.y << ", " << a.z <<"]" << std::endl;
    Vector b(4,7,2);
    std::cout<<"Wektor B = ["<< b.x << ", " << b.y << ", " << b.z <<"]" << std::endl;

    // SUMA A + B
    Vector c(0,0,0);
    c.add(a);
    c.add(b);
    std::cout<<"Wektor A + B = ["<< c.x << ", " << c.y << ", " << c.z <<"]" << std::endl;

    //SUMA B + A
    c.setVector(0,0,0);
    c.add(b);
    c.add(a);
    std::cout<<"Wektor B + A = ["<< c.x << ", " << c.y << ", " << c.z <<"]" << std::endl << std::endl;


    //KĄT POMIĘDZY WEKTOREM [0,3,0] A [5,5,0]
    std::cout << "Podpunkt 2 - kat pomiedzy wektorem [0,3,0] a [5,5,0]." << std::endl;
    a.setVector(0,3,0);
    b.setVector(5,5,0);
    std::cout<<"Wektor A = ["<< a.x << ", " << a.y << ", " << a.z <<"]" << std::endl;
    std::cout<<"Wektor B = ["<< b.x << ", " << b.y << ", " << b.z <<"]" << std::endl;
    std::cout << "Kat pomiedzy wektorami A i B = " << getAngle(a, b) << " stopni." << std::endl << std::endl;


    //WEKTOR PROSTOPADŁY DO WEKTORÓW [4,5,1] I [4,1,3]
    std::cout << "Podpunkt 3 - wektor prostopadly do wektorow [4,5,1] i [4,1,3]." << std::endl;
    a.setVector(4,5,1);
    std::cout<<"Wektor A = ["<< a.x << ", " << a.y << ", " << a.z <<"]" << std::endl;
    b.setVector(4,1,3);
    std::cout<<"Wektor B = ["<< b.x << ", " << b.y << ", " << b.z <<"]" << std::endl;
    c.cross(a,b);
    std::cout<<"Wektor prostopadly do wektorow [4,5,1] i [4,1,3] = [" << c.x << ", " << c.y << ", " << c.z << "]" << std::endl << std::endl;


    //NORMALIZACJA POWSTAŁEGO WEKTORA
    std::cout << "Podpunkt 4 - normalizacja powstalego wektora." << std::endl;
    std::cout<<"Wektor przed normalizacja = ["<< c.x << ", " << c.y << ", " << c.z <<"]" << std::endl;
    c.normalize();
    std::cout <<"Wektor znormalizowany = [" << c.x << ", " << c.y << ", " << c.z << "]" << std::endl;

    return 0;
}