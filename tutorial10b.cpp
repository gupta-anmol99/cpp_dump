// In this tuutorial we will practice constructors and friend function.

#include <iostream>
using namespace std;

class Point
{
    int x, y;
    friend int manhattanDist(Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int manhattanDist(Point a) { return (a.x + a.y); }

int main()
{
    Point a(4, 7);
    int dist = manhattanDist(a);
    cout << dist << endl;
}