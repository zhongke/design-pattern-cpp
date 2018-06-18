#pragma once

#include "CondimentDecorator.hh"

class Whip : public CondimentDecorator
{
public:
       explicit Whip(Beverage* bv)
              : CondimentDecorator{bv}
              {}

       // virtual std::string description() override;

       virtual float cost() override;

};
