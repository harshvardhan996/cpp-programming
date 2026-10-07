#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape:";
    }
};

class Square : public Shape
{
private:
    int side;

public:
    void area() override
    {
        cout << "Enter any side: ";
        cin >> side;

        int a = side * side;

        cout << "Area of square: " << a << endl;
    }
};

class Rectangle : public Shape
{
private:
    int length;
    int breadth;

public:
    void area() override
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;

        int a = length * breadth;

        cout << "Area of rectangle: " << a << endl;
    }
};

int main()
{
    Square s;
    Rectangle r;

    Shape *ptr;

    ptr = &s;
    ptr->area();

    Shape *ptr1;

    ptr1 = &r;
    ptr1->area();

    return 0;
}
