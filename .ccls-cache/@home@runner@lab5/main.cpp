#include "ShapeArea.h"
#include <iostream>
using namespace std;

struct RectangleShape {
  float length;
  float width;
};

struct SquareShape {
  float length;
};

struct CircleShape {
  float radius;
};

int main() {

  RectangleShape Rectangle_1, Rectangle_2;
  SquareShape Square;
  CircleShape Circle;

  float area, peri_Rectangle2, cost;

  Circle.radius = 5;
  Rectangle_1.length = 7;
  Rectangle_1.width = 3;
  Rectangle_2.length = 28;
  Rectangle_2.width = 15;
  Square.length = 4;

  area = (areaRectangle(Rectangle_2.length, Rectangle_2.width) -
          (areaRectangle(Rectangle_1.length, Rectangle_1.width) +
           areaSquare(Square.length) + areaCircle(Circle.radius)));

  cout << "Green Area: " << area << endl;
  peri_Rectangle2 = periRectangle(Rectangle_2.length, Rectangle_2.width);

  cout << "Perimeter of Rectangle 2: " << peri_Rectangle2 << endl;

  cout << "Enter the cost of fence per meter: ";
  cin >> cost;

  cout << "Total Cost: " << totalcost(peri_Rectangle2, cost);
}
