//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_PARSE_BOOL_H
#define BOOLEAN_ALGEBRA_NEW_PARSE_BOOL_H

#include <iostream>
#include <bitset>
#include "math.h"
#include "Term_Object.h"
#include "And.h"
#include "Not.h"
#include "Or.h"
#include "Variable.h"

class Parse_bool
{
public:
    Parse_bool();
    Term_Object* parse(std::string outstr);
    void evaluate(Term_Object* term);
};


#endif //BOOLEAN_ALGEBRA_NEW_PARSE_BOOL_H
