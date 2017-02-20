// Boolean_Algebra.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "main.h"



int main()
{
    std::string input;

    printf("**********************************************************************************************\n"); //Text & Ausgabe des Menüs
    printf("Herzlich willkommen beim Tool zur Pruefung von Boolscher Algebra!\n\n");
    printf("Bitte verwenden Sie zur eingabe die folgenden Operatoren:\n");
    printf("Nicht: \t \t !\n");
    printf("Und: \t \t &\n");
    printf("Oder: \t \t |\n");
    printf("Variablen: \t a,b,c,d\n\n");
    printf("Zum Verlassen des Programmes tippen sie: exit\n");
    printf("**********************************************************************************************\n");
    printf("Bitte geben Sie einen Ausdruck ein: ");
    std::cin >> input;
    //Eingabe des Audruckes und Schreiben in Variable
    if (input != "exit")
    {
        //Aufruf der Parse-Klasse
        Parse_bool* testobjekt;
        testobjekt = new Parse_bool();
        Term_Object* object = testobjekt -> parse(input);

        testobjekt -> evaluate(object);
    }

    return 0;
}