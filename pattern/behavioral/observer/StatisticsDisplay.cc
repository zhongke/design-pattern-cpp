#include <iostream>
#include "StatisticsDisplay.hh"

void
StatisticsDisplay::update( float temperature
                               , float humidity
                               , float pressure)
{
       this->temperature = temperature;
       this->humidity    = humidity;
       this->pressure    = pressure;

       display();

}

void
StatisticsDisplay::display()
{
       std::cout << "name        : "  << name        << "\n"
                 << "temperature : "  << temperature << "\n"
                 << "humidity    : "  << humidity    << "\n"
                 << "pressure    : "  << pressure
                 << std::endl;
}
