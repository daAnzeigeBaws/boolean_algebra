//
// Created by phillip.goellner on 19.02.2017.
//

#include "Or.h"

//Konstruktor mit zwei Subtermen als Übergabeparameter
Or::Or(Term_Object* sub_left, Term_Object* sub_right)
{
    subterm_left = sub_left;
    subterm_right = sub_right;
}

//Die logische Auswertung dieses Ausdrucks wird zurückgegeben
bool Or::evaluate(std::map<std::string, char>* vars)
{
    return (subterm_left -> evaluate(vars)) || (subterm_right -> evaluate(vars));
}