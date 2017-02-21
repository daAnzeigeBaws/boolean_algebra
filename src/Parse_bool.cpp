//
// Created by phillip.goellner on 19.02.2017.
//

#include "Parse_bool.h"

//Standard-Konstruktor
Parse_bool::Parse_bool()
{}

Term_Object* Parse_bool::parse(std::string str)
{
    /*
     * Hier wird der eingegebene Ausdruck geparst. Dabei wird er in aufsteigender Reihenfolge vom schwächsten
     * zum stärksten bindenden Operator rekursiv in Unterausdrücke zerlegt. Dabei werden jeweils die entsprechenden
     * Operator-Objekte erzeugt, wodurch sich ein Syntaxbaum bildet.
     * Ist der Algorithmus bei einer Variable, also einem atomaren Ausdruck angelangt, wird ein neues VAriablen-Objekt
     * erzeugt.
     */

    //Der gegebene Ausdruck wird am ODER-Operator aufgeteilt und der linke und der rechte Teil werden jeweils einzeln
    //weiter ausgewertet
    if(str.find("|") != std::string::npos)
    {
        int left_subterm_end = str.find("|");
        std::string left_subterm = str.substr(0, left_subterm_end);
        std::string right_subterm = str.substr(left_subterm_end + 1, str.length());

        return new Or(Parse_bool::parse(left_subterm), Parse_bool::parse(right_subterm));
    }
        //Der gegebene Ausdruck wird am UND-Operator aufgeteilt und der linke und der rechte Teil werden jeweils einzeln
        //weiter ausgewertet
    else if(str.find("&") != std::string::npos)
    {
        int left_subterm_end = str.find("&");
        std::string left_subterm = str.substr(0, left_subterm_end);
        std::string right_subterm = str.substr(left_subterm_end + 1, str.length());

        return new And(Parse_bool::parse(left_subterm), Parse_bool::parse(right_subterm));
    }
        //Der gegebene Ausdruck wird am NICHT-Operator aufgeteilt und der verbleibende Teil wird weiter ausgewertet
    else if(str.find("!") != std::string::npos)
    {
        return new Not(Parse_bool::parse(str.substr(1, str.length())));
    }
        //Der gegebene Ausdruck wird als Variable zurückgegeben
    else
    {
        return new Variable(str);
    }
}

void Parse_bool::evaluate(Term_Object* term)
{
    //Ausdrucken des Tabellenkopfes
    std::cout << "a b c d | Ergebnis" << std::endl;
    std::cout << "------------------" << std::endl;

    //Anzahl der verwendeten Variablen; dient lediglich einer besseren Erweiterbarkeit
    int number_of_vars = 4;

    for (int i = 0; i < pow(2, number_of_vars); ++i)
    {
        //Erzeugen einer dualen Zahl mit 4 Bit zum einfachen Hochzählen dür die verschiedenen Variablenbelegungen
        std::string s = std::bitset<4>(i).to_string();

        //Erzeugen einer Map als Abbildung der aktuellen Variablenbelegungen
        std::map<std::string, char>* the_map = new std::map<std::string, char>();
        the_map -> insert(std::make_pair("a", s.at(0)));
        the_map -> insert(std::make_pair("b", s.at(1)));
        the_map -> insert(std::make_pair("c", s.at(2)));
        the_map -> insert(std::make_pair("d", s.at(3)));

        //Auswertung der aktuellen Variablenbelegung und Ausdrucken des Ergebnisses
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
