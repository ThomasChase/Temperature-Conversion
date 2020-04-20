/*
Created by Thomas Chase
Created on April 20,2020
*/

//This program will get the current temp from the user and convert it to the oppisite system of measurement.

#include <iostream>
#include <cmath>
#include <iomanip>

//Function prototypes
double fahrenheit(double c);
double celsius(double f);

using namespace std;

//Declare globle variables
double f;
double c;
double temp;
char answer;

int main()
{
    //Interaction with user
    cout << "I will help you convert the tempature." << endl;
    cout << "Will we be convtering to Fahrenheit(f) or Celsius(c)? ";
    cin >> answer;
    answer = tolower(answer);
    cout << "What is the tempature? ";
    cin >> temp;

    //If loop for conversions
    if (answer == 'f'){
        c = temp;
        cout << c << " degrees Celsius is " << fahrenheit(c) << " degrees Fahrenheit." << endl;
    } else if (answer == 'c'){
        f = temp;
        cout << f << " degrees Fahrenheit is " << celsius(f) << " degrees Celsius." << endl;
    } else{
        cout << "Sorry that is not a vaild response." << endl;
    }
    return 0;
}

//Return fahrenheit conversion
double fahrenheit(double c){
    double fConvert = (9.0/5.0) * c + 32;
    return fConvert;
}

//Return celcius conversion
double celsius(double f){
    double cConvert = (5.0/9.0) * (f - 32);
    return cConvert;
}
