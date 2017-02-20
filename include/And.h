//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_AND_H
#define BOOLEAN_ALGEBRA_NEW_AND_H

#include <map>
#include "Term_Object.h"

class And : public Term_Object
{
    Term_Object* subterm_left;
    Term_Object* subterm_right;

public:
    And(Term_Object* term_left, Term_Object* term_right);
    bool evaluate(std::map<std::string, char>* vars);
};


#endif //BOOLEAN_ALGEBRA_NEW_AND_H