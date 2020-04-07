#include <iostream>

using std::cout;
using std::endl;
using std::string;

class CarColor
{
public:

  // Set default car color to blue
  CarColor ();

  CarColor (string color);

private:
  string color;
};

CarColor::CarColor()
{
  color = blue;
}

CarColor::CarColor (string color)
{
  this->color = color;

}
// Simple hello World program
int main()
{

  CarColor carColor;

  string hello = "Hello";

  cout << hello << endl;

  return 0;
}
