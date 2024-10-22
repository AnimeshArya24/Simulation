#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include <vector>

#include "Engine.h"
#include "External_Temprature.h"
#include "Internal_Temprature.h"

void Engine_check(){
    std::cout << "Enter engine temprature and tier temprature:" << std::endl;
    
    int n,m;
    std::cin>>n>>m;
    Engine obj(n,m);
    obj.Output();
}

void External_Check(){
    std::cout << "Enter the Temprature Outside: " << std::endl;
    int n;
    std::cin>>n;

    External obj(n);
    obj.Output();
    
}

void Internal_check(){
    std::cout << "Enter the Temprature inside: " << std::endl;
    int n;
    std::cin>>n;

    Internal obj(n);
    obj.Output();
    
}

#endif // FUNCTIONALITIES_H
