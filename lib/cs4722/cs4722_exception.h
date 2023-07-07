//
// Created by Ben on 4/1/2021.
//

#ifndef CS4722LIB_CS4722_EXCEPTION_H
#define CS4722LIB_CS4722_EXCEPTION_H

#include <exception>
#include <cstdio>

class exception : public std::exception {
public:
    std::string message;


public:
    explicit exception(const char* message) {
        this->message = std::string(message);
    }

    explicit exception(const std::string& message) {
        this->message = std::string(message);
    }

    exception() : exception("cs4722 library error signalled")
    {}


    const char * what() const noexcept override {
        return message.c_str();
    }

    void append(const char* str) {
        message += std::string(str);
    }

};





#endif //CS4722LIB_CS4722_EXCEPTION_H
