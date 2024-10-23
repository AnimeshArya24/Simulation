#ifndef EXTERNAL_TEMPRATURE_H
#define EXTERNAL_TEMPRATURE_H
#include <iostream>
#include "CustomException.h"
class External
{
private:
    int IN_CAN_External_Temp{0};
    std::string OUT_CAN_AC_ECU{""};

public:
    External() = default;
    External(External &&) = delete;
    External(const External &) = delete;
    External &operator=(External &&) = delete;
    External &operator=(const External &) = delete;
    ~External() = default;

    External(int temp):IN_CAN_External_Temp{temp}{}

    void Output(){
        if(IN_CAN_External_Temp>0 && IN_CAN_External_Temp<60){
            if(IN_CAN_External_Temp>24){
                OUT_CAN_AC_ECU = "AC is on and set to 24";
                std::cout << OUT_CAN_AC_ECU << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Invalid sensors Reading");
        }
    }
};

#endif // EXTERNAL_TEMPRATURE_H
