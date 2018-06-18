#pragma once

#include <string>

class Beverage
{
public:
       /*
       explicit Beverage(std::string& desc)
              : desc(desc)
              {}
       */
       // virtual std::string description() = 0;

       virtual float cost() =0;
private:
       // std::string& desc;
};
