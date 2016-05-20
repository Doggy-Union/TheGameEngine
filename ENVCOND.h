#ifndef ENVCOND_H_INCLUDED
#define ENVCOND_H_INCLUDED
#include "DESC_INTERFACE.h"

class EnvCond : public DESC {
protected:
    int weatherStatus;
    bool timeOfDay;
public:
    int weather();
    void changeTimeOfDay();
    void changeTimeOfDay(bool requiredTimeOfDay);
    std::string getDescription();
    EnvCond();
};

#endif // ENVCOND_H_INCLUDED
