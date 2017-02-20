//
// Created by phillip.goellner on 19.02.2017.
//

#include "Variable.h"

//Konstruktor mit einem String als Parameter, der den Namen der Varible repräsentiert
Variable::Variable(std::string name)
{
    var_name = name;
}

//Wird aus irgend einem Grund nicht ausgeführt -> unbekanntes Problem
bool evaluate(std::map<std::string, char>* vars) {
    return true;
}