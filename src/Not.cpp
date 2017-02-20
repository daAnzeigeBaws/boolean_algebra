//
// Created by phillip.goellner on 19.02.2017.
//

#include "Not.h"


Not::Not(Term_Object* sub)
{
    subterm = sub;
}

bool Not::evaluate(std::map<std::string, char>* vars)
{
    return !(subterm -> evaluate(vars));
}