#ifndef SAVE_INTERFACE_H_INCLUDED
#define SAVE_INTERFACE_H_INCLUDED

#include <string>

class SAVABLE {
    public:
        virtual std::string getSaveData() = 0;
        virtual void initBySavedData(std::string) = 0;
};

#endif // SAVE_INTERFACE_H_INCLUDED
