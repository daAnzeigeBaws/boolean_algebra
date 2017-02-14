#pragma once
#include "Term_Object.h"
class Bracket :
	public Term_Object
{
Term_Object subterm;

public:
	Bracket(Term_Object term);

	bool evaluate(std::string* vars)
	{
	    return subterm.evaluate(vars);
	}
};

