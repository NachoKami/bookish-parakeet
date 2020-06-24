//Programmer: Tyler Heald
//Date: 6/24/2020
//Raytracing one weekend general constants

#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <cstdlib>
#include <limits>
#include <memory>

//Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;

//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

//common headers

#include "ray.h"
#include "vec3.h"
#include "color.h"

#endif