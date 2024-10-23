#ifndef INTERNAL_TEMPRATURE_H
#define INTERNAL_TEMPRATURE_H
#include <iostream>
#include "CustomException.h"
class Internal
{
private:
    int IN_CAN_Internal_temp{0};
    std::string OUT_CAN_AC_ECU{""};
public:
    Internal() = default;
    Internal(Internal &&) = delete;
    Internal(const Internal &) = delete;
    Internal &operator=(Internal &&) = delete;
    Internal &operator=(const Internal &) = delete;
    ~Internal() = default;

    Internal(int temp):IN_CAN_Internal_temp{temp}{}

    void Output(){
         if(IN_CAN_Internal_temp>0 && IN_CAN_Internal_temp<60 ){
            if(IN_CAN_Internal_temp>24){
                OUT_CAN_AC_ECU = "AC is on and set to 24";
                std::cout << OUT_CAN_AC_ECU << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Invalid sensors Reading");
        }
    
    }
};

#endif // INTERNAL_TEMPRATURE_H
