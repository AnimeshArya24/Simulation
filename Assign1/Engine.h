#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>
#include "CustomException.h"

class Engine
{
private:
    int IN_CAN_Engine_Teamprature{0};
    std::string OUT_CAN_ENGINE_ECU{""};

    
public:
    Engine() = default;
    Engine(Engine &&) = delete;
    Engine(const Engine &) = delete;
    Engine &operator=(Engine &&) = delete;
    Engine &operator=(const Engine &) = delete;
    ~Engine() = default;

    Engine(int engine_temprature, int tier_temprature):IN_CAN_Engine_Teamprature{engine_temprature}{}

    void Output(){
        if(IN_CAN_Engine_Teamprature>0 && IN_CAN_Engine_Teamprature<150 ){
        if(IN_CAN_Engine_Teamprature>80){
            OUT_CAN_ENGINE_ECU = "Engine overheating alert !!";
            std::cout << OUT_CAN_ENGINE_ECU << std::endl;   
        }
        }
        else{
            throw CustomExceptionError("Error in Engine Temprature sensor!!");
        }

    }

};

#endif // ENGINE_H
