#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void Box::setWidth(int w)
{
  width = w;
}

void Box::setLength(int l)
{
  length = l;
}

void Box::setHeight(int h)
{
  height = h;
}


int Box::getWidth ()
{
  return width;
} 

int Box::getHeight ()
{
  return height;
}

int Box::getLength ()
{
  return length;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() 
{
  int volume = height * length * width;

  return volume;
}
