#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <stdexcept>
#include <cstring>
class CustomExceptionError : public std::exception
{
private:
    char *_msg;

public:
    CustomExceptionError() = default;
    CustomExceptionError(const CustomExceptionError &) = delete;
    CustomExceptionError &operator=(const CustomExceptionError &) = delete;
    CustomExceptionError(CustomExceptionError &&) = delete;
    CustomExceptionError &operator=(CustomExceptionError &&) = delete;
    ~CustomExceptionError(){
        delete _msg;
    }

    CustomExceptionError(const char *msg)
    {
        _msg = new char[strlen(msg) + 1];
        strcpy(_msg, msg);
    }

    virtual const char *what() const _GLIBCXX_TXN_SAFE_DYN _GLIBCXX_NOTHROW override
    {
        return _msg;
    }
};

#endif // CUSTOMEXCEPTION_H
