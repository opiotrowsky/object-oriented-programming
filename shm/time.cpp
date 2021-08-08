#include "time.hpp"

Time::Time() : dayNr_(0) {}

Time::Time(size_t dayNr, size_t daysLimit) : dayNr_(dayNr), daysLimit_(daysLimit) {}

size_t Time::endCurrentDay(size_t dayNr) {
    return ++dayNr;
}