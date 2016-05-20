#ifndef ENVCOND_H_INCLUDED
#define ENVCOND_H_INCLUDED

class EnvCond {
protected:
    int weatherStatus;
    bool timeOfDay;
public:
    int weather();
    void changeTimeOfDay();
    void changeTimeOfDay(bool requiredTimeOfDay);
    std::string generateDesc();
    EnvCond();
};

#endif // ENVCOND_H_INCLUDED
