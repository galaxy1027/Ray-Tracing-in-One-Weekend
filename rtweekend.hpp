#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <climits>
#include <memory>
#include <cstdlib>


using std::shared_ptr;
using std::make_shared;
using std::sqrt;

//Constants
const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.1415926535897932385;

//Utility functions

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180;
}

inline double random_double() {
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double(double min, double max) {
    return min + (max - min) * random_double();
}

//Common headers
#include "interval.hpp"
#include "ray.hpp"
#include "vec3.hpp"

#endif