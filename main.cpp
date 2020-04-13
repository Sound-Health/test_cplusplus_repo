//test comment for GitHub commit - 2019-04-13 at 9:48 AM
//test comment for GitHub commit - 2019-04-13 at 10:07 AM
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class CarColor
{
public:

  // Set default car color to blu
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
  color = "blue";
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
