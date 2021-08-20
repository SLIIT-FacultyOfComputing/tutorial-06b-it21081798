#include "Box.h"
#include <cstring>
using namespace std;

// Implement setters and getters
void Box::setLength(int bLength)
{
  lenght=bLength;
}
void Box::setWidth(int bWidth)
{
 width=bWidth; 
}
void Box::setHeight(int bHeight)
{
  heigth=bHeight;
}
// Implemenet the calcVolume() unction
int Box::getLength() 
{
  return length;
}
int Box::getWidth()
{
  return width;
}
int Box::getHeigth()
{
  return heigth;
}
int Box::calcVolume()
{
  return (lenght * width * heigth);
}