#include <iostream>
#include "CurrentConditionDisplay.hh"

void
CurrentConditionDisplay::update( float temperature
                               , float humidity
                               , float pressure)
{
       this->temperature = temperature;
       this->humidity    = humidity;
       this->pressure    = pressure;

       display();

}

void
CurrentConditionDisplay::display()
{
       std::cout << "name        : "  << name        << "\n"
                 << "temperature : "  << temperature << "\n"
                 << "humidity    : "  << humidity    << "\n"
                 << "pressure    : "  << pressure
                 << std::endl;
}
