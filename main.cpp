#include <iostream>

using std::cout;
using std::endl;
using std::string;

class CarColor
{
public:

  // Set default car color to blue
  CarColor ();

  // Overloaded constructor
  CarColor (string color);

// ****************** Getters ****************** //
  string getColor ();

// ****************** Setters ****************** //
  void setColor (string color);

private:

  string color;
};

// Default color is blue
CarColor::CarColor()
{
  color = blue;
}

// Can initialize color to some other color
CarColor::CarColor (string color)
{
  this->color = color;

}

// Returns the color
string CarColor::getColor ()
{
  return color;
}

// Sets the color
void CarColor::setColor (string color)
{
  this->color = color;
}

// Simple hello World program
int main()
{

  // Initialize string color
  string color;

  // Create instance of CarColor class
  CarColor carColor;

  // Get user input for color
  string hello = "Hello what is your favorite color car?";
  cin >> color;

  // Set the color
  carColor.setColor(color);

  // Print out the color
  cout << carColor.getColor() << endl;

  return 0;
}
