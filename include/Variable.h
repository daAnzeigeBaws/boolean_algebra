//
// Created by phillip.goellner on 19.02.2017.
//

#ifndef BOOLEAN_ALGEBRA_NEW_VARIABLE_H
#define BOOLEAN_ALGEBRA_NEW_VARIABLE_H

#include <map>
#include <Term_Object.h>

class Variable : public Term_Object
{
public:
    std::string var_name;

    Variable(std::string name);

    //Überschreibt die geerbte Methode; musste aus unerfindlichen Gründen hier implementiert werden
    virtual bool evaluate(std::map<std::string, char>* vars){
        return vars -> at(var_name) != '0';
    };
};


#endif //BOOLEAN_ALGEBRA_NEW_VARIABLE_H
