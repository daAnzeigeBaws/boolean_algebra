#include "stdafx.h"
using namespace std

Parse_bool::Parse_bool()
{
	
}

Term_Object Parse_bool::parse(string str)
{
	if(str.find("|") != str::npos)
	{
        return new Or(Parse_bool::parse(s.substr(0, s.find(delimiter))), Parse_bool::parse(s.substr(s.find(delimiter) + 1, str.length())));
	}
	else if(str.find("&") != str::npos)
    {
        return new And(Parse_bool::parse(s.substr(0, s.find(delimiter))), Parse_bool::parse(s.substr(s.find(delimiter) + 1, str.length())));
    }
    else if(str.find("(") != str::npos)
    {
        //return new Bracket(Parse_bool::parse(s.substr(0, s.find(delimiter))), Parse_bool::parse(s.substr(s.find(delimiter) + 1, str.length())));
    }
    else if(str.find("!") != str::npos)
    {
        return new Not(Parse_bool::parse(s.substr(1, str.length())));
    }
    else
    {
        return new Variable(str);
    }
}