#ifndef DESC_INTERFACE_H_INCLUDED
#define DESC_INTERFACE_H_INCLUDED

#include <string>

class DESC {
    protected:
        std::string description;
    public:
        virtual std::string getDescription() = 0;
};

#endif // DESC_INTERFACE_H_INCLUDED
