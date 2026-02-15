#pragma once
#include <string>

class ENTITI{
private:
    std::string name;
protected:
    ENTITI(std::string name){
        this->name = name;
    }

    std::string getName(){
        return this->name;
    }
public:
};
