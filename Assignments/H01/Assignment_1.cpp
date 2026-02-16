#include <iostream>

using namespace std;


class Point2D {
    int x;
    int y;
public:
    //I didn't understand this at all until I did more research. Just a condensed way to create a constructor- initializing x and y to 0, finishing off with the needed brackets, then ending
    Point2D() :x(0), y(0) {} // default constructor
    //Takes int x and y, local parameters to temporarily hold values. It initializes the members x and y with the parameters x and y. 
    //I found this really confusing until it suddenly clicked. Would still prefer doing things the long way, but I digress. 
    Point2D(int x, int y) :x(x), y(y) {} // overloaded constructor
    //passes a reference of Point2D
    //x(p.x) and y(p.y) lend to this new object getting the same values
    Point2D(const Point2D& p) :x(p.x), y(p.y) {} // copy constructor


    //Not altering this because I DID rely on the example work to create this. Overloading operators like this is brand new to me and the example code was invaluable when doing this.
    //If this is unacceptable, I understand and apologize sincerely. 
    friend ostream& operator<<(ostream& banana, const Point2D& p) {
        return banana << "[" << p.x << "," << p.y << "]";
    }

    //Creates a Point2D object, followed by operator+ to identify the operator being overloaded
    //cont(constant) Point2D&(passing by reference to avoid dupes), rhs(right hand side)
    Point2D operator+(const Point2D& rhs) {
        return Point2D(x + rhs.x, y + rhs.y);
    }
    Point2D operator-(const Point2D& rhs) {
        return Point2D(x - rhs.x, y - rhs.y);
    }

    //Had to change return type to bool, since == returns T/F
    //Everything else follows the same logic as above
    bool operator==(const Point2D& rhs) {
        return (x == rhs.x && y == rhs.y);
    }
    //I'm unsure if I misunderstood directions or not, as I am not aware of another way to do this without duping operator== with a !
    bool operator!=(const Point2D& rhs) {
        return !(x == rhs.x && y == rhs.y);
    }

    // Setters & Getters remain the same as the sample code
    void setX(int x) {
        this->x = x;
    }
    void setY(int y) {
        this->y = y;
    }
    int getX() {
        return x;
    }
    int getY() {
        return y;
    }
};



int main() {
    int x, y;


    Point2D a(3, 4);
    Point2D b(1, 2);

    Point2D c = a + b;
    Point2D d = a - b;

    if (c == Point2D(4, 6)) {
        cout << "Math still works.\n";
    }

    cout << a << endl;

    return 0;
}