//
// Created by phillip.goellner on 19.02.2017.
//

#include "And.h"

And::And(Term_Object* sub_left, Term_Object* sub_right)
{
    subterm_left = sub_left;
    subterm_right = sub_right;
}

bool And::evaluate(std::map<std::string, char>* vars)
{
    return (subterm_left -> evaluate(vars)) && (subterm_right -> evaluate(vars));
}