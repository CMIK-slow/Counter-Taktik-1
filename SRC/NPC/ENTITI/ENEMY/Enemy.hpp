#pragma once
#include "SRC/NPC/ENTITI/ENTITI.hpp"

class Enemy : public ENTITI{
private:
    char look;
protected:
    Enemy(std::string name,char look) : ENTITI(name) {
        this->look = look;
    }

    char getLook(){
        return this->look;
    }
public:
};
