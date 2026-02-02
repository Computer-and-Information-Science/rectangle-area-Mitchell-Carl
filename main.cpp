#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double Area, Perimeter;
  Area = length * width;
  Perimeter = 2*(length + width); 

  cout << "Rectangle Properties:" << endl;
  cout << "The Length = " << length << endl;
  cout << "The Width = " << width << endl;
  cout << "The Area = " << Area << endl;
  cout << "The Perimeter = " << Perimeter << endl;

}