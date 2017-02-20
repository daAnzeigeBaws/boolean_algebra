//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_NOT_H
#define BOOLEAN_ALGEBRA_NEW_NOT_H

#include <map>
#include "Term_Object.h"

class Not : public Term_Object
{
    Term_Object* subterm;

public:
    Not(Term_Object* term);
    bool evaluate(std::map<std::string, char>* vars);
};

#endif //BOOLEAN_ALGEBRA_NEW_NOT_H