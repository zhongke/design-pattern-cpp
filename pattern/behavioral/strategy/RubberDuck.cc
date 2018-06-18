#include <iostream>
#include <memory>

#include "RubberDuck.hh"
#include "FlyWithWing.hh"
#include "Quack.hh"

RubberDuck::RubberDuck()
       : Duck{ std::make_shared<FlyWithWing>()
             , std::make_shared<Quack>() }
{}

void
RubberDuck::display()
{
       std::cout << "RubberDuck is coming!!!" << std::endl;
}
