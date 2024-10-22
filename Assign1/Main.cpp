#include "Functionalities.h"

int main(){
    try{
    Engine_check();
    External_Check();
    Internal_check();
    }
    catch(const CustomExceptionError& e){
        std::cerr<<e.what()<<"\n";
    }

    return 0;
}