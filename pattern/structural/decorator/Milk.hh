#pragma once

#include "CondimentDecorator.hh"

class Milk : public CondimentDecorator
{
public:
       explicit Milk(Beverage* bv)
              : CondimentDecorator{bv}
              {}

       // virtual std::string description() override;

       virtual float cost() override;

};
