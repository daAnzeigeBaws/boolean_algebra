//
// Created by phillip.goellner on 19.02.2017.
//

#include "Not.h"

//Konstruktor mit einem Subterm als Übergabeparameter
Not::Not(Term_Object* sub)
{
    subterm = sub;
}

//Die logische Auswertung dieses Ausdrucks wird zurückgegeben
bool Not::evaluate(std::map<std::string, char>* vars)
{
    return !(subterm -> evaluate(vars));
}