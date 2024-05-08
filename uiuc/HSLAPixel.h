/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>
#include "RGB_HSL.h"

namespace uiuc {

  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
class HSLAPixel {
  public:
    double h; // between 0 and 360, hue
    double s; // between 0.0 and 1.0, saturation
    double l; // between 0.0 and 1.0, luminance
    double a; // between 0.0 and 1.0, alpha
};


}
