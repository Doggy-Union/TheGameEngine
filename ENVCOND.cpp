#include <cstdlib>
#include <string>
#include "PROBAB.h"
#include "ENVCOND.h"

EnvCond::EnvCond() {
    weatherStatus = 0;
    timeOfDay = true;
}

int EnvCond::weather() { // Function returns computed weather and write it to *int weatherStatus*
    if (computeProbab(90)) { return this -> weatherStatus; }
    else { return 1; } // There's no code because it needed to define how much weathers may be?
}

void EnvCond::changeTimeOfDay() {
    if (this -> timeOfDay == true) { this -> timeOfDay = false; }
    else { this -> timeOfDay = true; }
}

void EnvCond::changeTimeOfDay(bool requiredTimeOfDay) {
    this -> timeOfDay = requiredTimeOfDay;
}

std::string EnvCond::generateDesc() {
}
