#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

#include "SAVE_INTERFACE.h"

class Time : public SAVABLE {
    private:
        unsigned long int t;
    public:
        Time();
        void plus(int x);
        unsigned long int get();
        std::string getSaveData();
        void initBySavedData(std::string);
};

#endif // TIME_H_INCLUDED
