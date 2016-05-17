#include <cstdlib>
#include <cstdio>
#include <string>

#include "TIME.h"

Time::Time() {
    t = 0;
}

unsigned long int Time::get() {
    return t;
}

void Time::plus(int x) {
    if(t + x >= 0) t += x;
}

std::string Time::getSaveData() {
    char res[128];
    sprintf(res, "%d", t);
    return (std::string)res;
}

void Time::initBySavedData(std::string s) {
    t = std::atoi(s.c_str());
}
