#ifndef INTERNAL_TEMPRATURE_H
#define INTERNAL_TEMPRATURE_H
#include <iostream>
#include "CustomException.h"
class Internal
{
private:
    int Internal_temp{0};
public:
    Internal() = default;
    Internal(Internal &&) = delete;
    Internal(const Internal &) = delete;
    Internal &operator=(Internal &&) = delete;
    Internal &operator=(const Internal &) = delete;
    ~Internal() = default;

    Internal(int temp):Internal_temp{temp}{}

    void Output(){
         if(Internal_temp>0 && Internal_temp<60 ){
            if(Internal_temp>24){
                std::cout << "AC is on and set to 24" << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Invalid sensors Reading");
        }
    
    }
};

#endif // INTERNAL_TEMPRATURE_H
