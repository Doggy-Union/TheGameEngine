#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include "DESC_INTERFACE.h"
#include <string>

class Item : public DESC {
    protected:
        struct property;
        int id;
        std::string name;
    public:
        Item(int id, std::string name) { this->id = id; this->name = name; }
        std::string getName() { return name; }
        int getId() { return id; }
        std::string getDescription() { return this->description; }
};

#endif // ITEM_H_INCLUDED
