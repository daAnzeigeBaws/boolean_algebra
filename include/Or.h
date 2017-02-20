//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_OR_H
#define BOOLEAN_ALGEBRA_NEW_OR_H

#include <map>
#include "Term_Object.h"

class Or : public Term_Object
{
    Term_Object* subterm_left;
    Term_Object* subterm_right;

public:
    Or(Term_Object* term_left, Term_Object* term_right);
    bool evaluate(std::map<std::string, char>* vars);
};

#endif //BOOLEAN_ALGEBRA_NEW_OR_H