#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include "CustomException.h"

class Engine
{
private:
    int IN_CAN_Tier_Temprature{0};
    std::string OUT_CAN_ENGINE_ECU{""};
    
public:
    Engine() = default;
    Engine(Engine &&) = delete;
    Engine(const Engine &) = delete;
    Engine &operator=(Engine &&) = delete;
    Engine &operator=(const Engine &) = delete;
    ~Engine() = default;

    Engine(int tier_temprature):IN_CAN_Tier_Temprature{tier_temprature}{}

    void Output(){
        if(IN_CAN_Tier_Temprature>0 && IN_CAN_Tier_Temprature<80){
            if(IN_CAN_Tier_Temprature>60){
                OUT_CAN_ENGINE_ECU = "Tier Overheating alert slow down!!";
                std::cout << OUT_CAN_ENGINE_ECU << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Error in Tier Temprature sensor");
        }
    }


};

#endif // ENGINE_H
