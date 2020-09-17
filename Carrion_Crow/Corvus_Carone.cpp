//this program uses the Crow class' constructor
#include<iostream>
#include<string>
#include<iomanip>
#include"Crow.h" //needed for Crow class
#include"AskToExit.h" //if you want the program to run again.
using namespace std;

//function prototypes
int program();

int main()
{
   program();
}

int program()
{
     string crowColor; //holds crow's color
    string crowGender; //holds crow's gender

    //create a Crow object.
     Crow corvus_carone(crowColor, crowGender); //establishes object for Carrion Crow

     //ask the user what color the crow is.
     cout << "What color is your crow(black/tan/white/gold)?\n";
    cin >> crowColor;
    corvus_carone.setColor(crowColor);
   // cin.ignore(); //absorb newline char

     //get the crow's gender.
     cout << "What gender is your crow (m/f)?\n";
     cin >> crowGender;
     corvus_carone.setGender(crowGender);
     //cin.ignore(); //absorb newline char

     //display the house's length, width and area.
     cout << "The crow's feather color is " << corvus_carone.getColor() << ".\n";
     cout << "The crow's gender is " << corvus_carone.getGender() << ".\n";
    cin.get();
    AskToExit();
}
