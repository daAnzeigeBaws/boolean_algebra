//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_TERM_OBJECT_H
#define BOOLEAN_ALGEBRA_NEW_TERM_OBJECT_H

#include <map>
#include "iostream"

class Term_Object {
public:
    virtual bool evaluate(std::map<std::string, char>* vars) = 0;
};


#endif //BOOLEAN_ALGEBRA_NEW_TERM_OBJECT_H
