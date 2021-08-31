#pragma once
#include <iostream>

class Time {
private:
    size_t dayNr_;
    size_t daysLimit_;

public:
    Time();
    Time(size_t dayNr, size_t daysLimit);

    size_t getDayNr() const { return dayNr_; }
    size_t getDaysLimit() const { return daysLimit_; }

    size_t setDaysLimit(size_t daysLimit) { return daysLimit_ = daysLimit; }

    size_t endCurrentDay(size_t dayNr);
};
