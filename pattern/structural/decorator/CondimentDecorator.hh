#pragma once

#include "Beverage.hh"

class CondimentDecorator : public Beverage
{
public:
       explicit CondimentDecorator(Beverage* bv)
              : Beverage{}
              , bv(bv)
              {}

       // virtual std::string description() = 0;

       virtual float cost() = 0;

       // float getCost();
       // std::string getDescription();

       Beverage* bv;
};
