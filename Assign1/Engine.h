#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include "CustomException.h"

class Engine
{
private:
    int Engine_Teamprature{0};
    int Tier_Temprature{0};
    
public:
    Engine() = default;
    Engine(Engine &&) = delete;
    Engine(const Engine &) = delete;
    Engine &operator=(Engine &&) = delete;
    Engine &operator=(const Engine &) = delete;
    ~Engine() = default;

    Engine(int engine_temprature, int tier_temprature):Engine_Teamprature{engine_temprature}, Tier_Temprature{tier_temprature}{}

    void Output(){
        if(Engine_Teamprature>0 && Engine_Teamprature<150 ){
        if(Engine_Teamprature>80){
            std::cout << "Engine OverHeat!!" << std::endl;   
        }
        }
        else{
            throw CustomExceptionError("Error in Engine Temprature sensor!!");
        }

        if(Tier_Temprature>0 && Tier_Temprature<80){
            if(Tier_Temprature>60){
                std::cout << "Tier Overheat!!" << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Error in Tier Temprature sensor");
        }
    }

    friend std::ostream &operator<<(std::ostream &os, const Engine &rhs) {
        os << "Engine_Teamprature: " << rhs.Engine_Teamprature
           << " Tier_Temprature: " << rhs.Tier_Temprature;
        return os;
    }

};

#endif // ENGINE_H
