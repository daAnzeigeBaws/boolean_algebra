//
// Created by phillip.goellner on 19.02.2017.
//

#include "Parse_bool.h"

Parse_bool::Parse_bool()
{}

Term_Object* Parse_bool::parse(std::string str)
{
    if(str.find("|") != std::string::npos)
    {
        int left_subterm_end = str.find("|");
        std::string left_subterm = str.substr(0, left_subterm_end);
        std::string right_subterm = str.substr(left_subterm_end + 1, str.length());

        return new Or(Parse_bool::parse(left_subterm), Parse_bool::parse(right_subterm));
    }
    else if(str.find("&") != std::string::npos)
    {
        int left_subterm_end = str.find("&");
        std::string left_subterm = str.substr(0, left_subterm_end);
        std::string right_subterm = str.substr(left_subterm_end + 1, str.length());

        return new And(Parse_bool::parse(left_subterm), Parse_bool::parse(right_subterm));
    }
    else if(str.find("!") != std::string::npos)
    {
        return new Not(Parse_bool::parse(str.substr(1, str.length())));
    }
    else
    {
        return new Variable(str);
    }
}

void Parse_bool::evaluate(Term_Object* term)
{
    std::cout << "a b c d | Ergebnis" << std::endl;
    std::cout << "------------------" << std::endl;

    int number_of_vars = 4;

    for (int i = 0; i < pow(2, number_of_vars); ++i)
    {
        std::string s = std::bitset< 4 >(i).to_string();
        std::map<std::string, char>* the_map = new std::map<std::string, char>();
        the_map -> insert(std::make_pair("a", s.at(0)));
        the_map -> insert(std::make_pair("b", s.at(1)));
        the_map -> insert(std::make_pair("c", s.at(2)));
        the_map -> insert(std::make_pair("d", s.at(3)));

        if (term -> evaluate(the_map))
        {
            std::cout << s.at(0) << " ";
            std::cout << s.at(1) << " ";
            std::cout << s.at(2) << " ";
            std::cout << s.at(3) << " | 1" << std::endl;
        } else{
            std::cout << s.at(0) << " ";
            std::cout << s.at(1) << " ";
            std::cout << s.at(2) << " ";
            std::cout << s.at(3) << " | 0" << std::endl;
        }

    }
}
