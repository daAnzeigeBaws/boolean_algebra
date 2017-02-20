//
// Created by phillip.goellner on 19.02.2017.
//

#include "Variable.h"

Variable::Variable(std::string name)
{
    var_name = name;
}

bool evaluate(std::map<std::string, char>* vars) {
    std::cout << (vars -> at("a")) << " look at me";
    if (vars -> at("a") == '0')
    {
        return false;
    }
    return true;
}