#pragma once
#include "Term_Object.h"
class Not :
	public Term_Object
{
Term_Object subterm;

public:
	Not(Term_Object term);

	bool evaluate(std::string* vars)
	{
	    return !subterm.evaluate(vars);
	}
};

