#include "Bus.h"

Bus::Bus()
{
    time_s = Time(0, 0, 0, true);
    time_f = Time(0, 0, 0, true);
    time_break = 0;
    time_road = 0;

}

Bus::Bus(Time time_s, Time time_f, int time_break, int time_road)

{
    this->time_s = time_s;
    this->time_f = time_f;
    this->time_break = time_break;
    this->time_road = time_road;
}

void Bus::buildgraph() const
{
    cout << "Dispatched about:";
    Time departA = time_s;
    while (true) {
        Time arriveB = departA + time_road;
        Time departB = arriveB + time_break;

        if (departB > time_f) {
            break;
        }
            

        departA.showTime();
        cout << "\t";
        departB.showTime();
       
        Time arriveA = departB + time_road;
        departA = arriveA + time_break;
    }

}
