/**
 * @file main.cpp
 * A simple C++ program that manipulates an image.
 *
 * @author University of Illinois CS 225 Course Staff
 * @author Updated by University of Illinois CS 400 Course Staff
**/

#include "ImageTransform.h"
#include "uiuc/PNG.h"

int main() {
  uiuc::PNG png, png2, result;

  png.readFromFile("alma.png");
  
  std::cout << "width: " << png.width() << std::endl;
  std::cout << "height: " << png.height() << std::endl;
  
  
  result = grayscale(png);
  result.writeToFile("out-grayscale.png");
  

  result = createSpotlight(png, 450, 150);
  result.writeToFile("out-spotlight.png");

  result = illinify(png);
  result.writeToFile("out-illinify.png");
  

  png2.readFromFile("overlay.png");
  
  std::cout << "png2 width: " << png2.width() << std::endl;
  std::cout << "png2 height: " << png2.height() << std::endl;
  
  result = watermark(png, png2);
  result.writeToFile("out-watermark.png");
 
 
  return 0;
}
