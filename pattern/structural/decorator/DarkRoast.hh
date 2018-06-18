#pragma once

#include "Beverage.hh"

class DarkRoast : public Beverage
{
public:
       /*
       explicit DarkRoast()
              : Beverage("DarkRoast")
              {}
       */

       // virtual std::string description() override;

       virtual float cost() override;
};
