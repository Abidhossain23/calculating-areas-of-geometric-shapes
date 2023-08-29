#include <bits/stdc++.h>
using namespace std;

class Shape {//Abstraction:
public:
    // Virtual destructor is essential in the presence of virtual functions to ensure proper cleanup.
    virtual ~Shape() {}
     // Consider changing the data type to represent a rating.
    virtual double area() = 0;//Polymorphism:
    virtual void input() = 0;//Polymorphism:
    virtual void printInfo() = 0;//Polymorphism:
};

class Circle : public Shape {//Inheritance:

private://Encapsulation:
    double radius;
    double rating; // Consider changing the data type to represent a rating.

public:
    Circle() {
        input();
    }

    double area() override {
        return 3.1416 * radius * radius;
    }

    void input() override {
        cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "|                                                PLEASE INPUT THE NUMBERS                                              |" << endl;
        cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    double getrating() {//Encapsulation:
        return rating;
    }

    void setrating(double newrating) {//Encapsulation:
        rating = newrating;
    }

       void printInfo() override {

       cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
       cout << "|                                                    HERE IS THE OUTPUT                                                |" << endl;
       cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
       cout << "This is a circle with radius "<<radius<< endl;
    }
};

class Rectangle : public Shape {//Inheritance:
private://Encapsulation:
    double width, height;

public:
    Rectangle() {
        input();
    }

    double area() override {
        return width * height;
    }

    void input() override {
        cout << "Enter the width and  of the rectangle: ";
        cin >> width;
        cout << "Enter the height of the rectangle: ";
        cin>> height;
    }

    void printInfo() override {
        cout << "This is a rectangle with width " << width << " and height " << height << "." << endl;
    }
};

int main() {
    Circle cir;//Inheritance:
    Rectangle rat;//Inheritance:

    Shape* shape1 = &cir;
    Shape* shape2 = &rat;
// Polymorphism: shape1 and shape2 can point to Circle and Rectangle objects, respectively.
    shape1->printInfo();
    cout << "Area: " << shape1->area() << endl;

    shape2->printInfo();
    cout << "Area: " << shape2->area() << endl;

    cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;
    cout << "|                                                    THANK YOU FOR RATING                                              |" << endl;
    cout << "|----------------------------------------------------------------------------------------------------------------------|" << endl;


    double newrating;
    cout << "Enter a rating for the program: ";
    cin  >> newrating;
           cir.setrating(newrating);
    cout << "Updated rating: " << cir.getrating() << endl;

}
