//specification file for Crow class
#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
//uses inline member functions
#ifndef CROW_H
#define CROW_H
//function prototype
int program();
//Crow class declaration
class Crow
{
private:
string color;
string gender;
public:
    Crow(string, string); //constructor
void setColor(string);
void setGender(string);
string getColor() const
{
    return color;
}
string getGender() const
{
    return gender;
}
};
#endif
//************************************************
// constructor declares color/gender.
//************************************************
Crow::Crow(string c, string g)
{
    color = c;
    gender = g;
}

//************************************************
// setColor assigns a known color to the color member.
//************************************************

void Crow::setColor(string c)
    {
        if (c == "black" || c == "tan" || c == "white" || c == "gold")
        color = c;
    else
    {
        cin.ignore(1, '\n'); cin.clear();
        cout << "Invalid color\n";
        program();
    }

    }
//************************************************
// setGender assigns a value to the gender member.
//************************************************
void Crow::setGender(string g)
    {
        if (g == "M" || g == "m")
        {
            g = "Male";
            gender = g;


        }
        else if  (g == "f" || g == "F")
        {
            g = "Female";
            gender = g;

        }
        else
        {
            cin.ignore(1, '\n'); cin.clear();
            cout << "Invalid gender\n";
            program();

        }
    }
