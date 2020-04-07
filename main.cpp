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

  string getColor ();

  void setColor (string color);

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

string CarColor::getColor ()
{
  return color;
}

void CarColor::setColor (string color)
{
  this->color = color;
}

// Simple hello World program
int main()
{

  string color;
  CarColor carColor;

  string hello = "Hello what is your favorite color car?";

  cin >> color;

  carColor.setColor(color);

  cout << carColor.getColor() << endl;

  return 0;
}
