#ifndef EXTERNAL_TEMPRATURE_H
#define EXTERNAL_TEMPRATURE_H
#include <iostream>
#include "CustomException.h"
class External
{
private:
    int External_Temp{0};
public:
    External() = default;
    External(External &&) = delete;
    External(const External &) = delete;
    External &operator=(External &&) = delete;
    External &operator=(const External &) = delete;
    ~External() = default;

    External(int temp):External_Temp{temp}{}

    void Output(){
        if(External_Temp>0 && External_Temp<60){
            if(External_Temp>24){
                std::cout << "AC is on and set to 24" << std::endl;
                
            }
        }
        else{
            throw CustomExceptionError("Invalid sensors Reading");
        }
    }
};

#endif // EXTERNAL_TEMPRATURE_H
