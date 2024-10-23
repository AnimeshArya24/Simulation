#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>

#include "Engine.h"
#include "External_Temprature.h"
#include "Internal_Temprature.h"

void Engine_check(){
    std::cout << "Enter engine temprature and tier temprature:" << std::endl;
    
    int READING_FROM_ENGINE_SENSORS,READING_FROM_TIER_SENSORS;
    std::cin>>READING_FROM_ENGINE_SENSORS>>READING_FROM_TIER_SENSORS;
    Engine obj(READING_FROM_ENGINE_SENSORS,READING_FROM_TIER_SENSORS);
    obj.Output();
}

void External_Check(){
    std::cout << "Enter the Temprature Outside: " << std::endl;
    int READING_FROM_EXTERNAL_SENSORS;
    std::cin>>READING_FROM_EXTERNAL_SENSORS;

    External obj(READING_FROM_EXTERNAL_SENSORS);
    obj.Output();
    
}

void Internal_check(){
    std::cout << "Enter the Temprature inside: " << std::endl;
    int READING_FROM_INTERNAL_SENSORS;
    std::cin>>READING_FROM_INTERNAL_SENSORS;

    Internal obj(READING_FROM_INTERNAL_SENSORS);
    obj.Output();
    
}

#endif // FUNCTIONALITIES_H
