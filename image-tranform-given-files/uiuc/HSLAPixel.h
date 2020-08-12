/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
  class HSLAPixel {
    public:
    double h; //hue from 0 to 360
    double s; //saturation from 0.0 to 1.0
    double l; //luminance from 0.0 to 1.0
    double a; // alpha channel(blending opacity) from 0.0 to 1.0
  }; 

}
