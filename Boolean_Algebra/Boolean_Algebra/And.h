#pragma once
#include "Term_Object.h"
class And :
	public Term_Object
{
Term_Object left_term;
Term_Object right_term;

public:
	And(Term_Object term1, Term_Object term2);

	bool evaluate(std::string* vars)
	{
	    return left_term.evaluate(vars) || right_term.evaluate(vars);
	}
};

