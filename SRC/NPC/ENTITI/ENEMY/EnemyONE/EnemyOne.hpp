#pragma once
#include "SRC/NPC/ENTITI/ENEMY/Enemy.hpp"
#include "SRC/SYSTEM/BYTE.hpp"

class EnemyOne : public Enemy{
private:
    byte hp;
    
protected:
    EnemyOne(std::string name,char look) : Enemy(name,look){
    
    }
public:
};
