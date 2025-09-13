#pragma once
#include "Time.h"

class Bus {
    Time time_s;
    Time time_f;
    int time_break;
    int time_road;
public:
   

    Bus();
    Bus(Time time_s, Time time_f, int time_break, int time_road);
    void buildgraph() const;
};
