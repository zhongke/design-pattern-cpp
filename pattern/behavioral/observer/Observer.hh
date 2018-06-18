#pragma once

#include <string>

class Observer
{
public:
       explicit Observer(const std::string& name)
              : name{name}
              {}

       virtual void update( float temp
                          , float humidity
                          , float pressure) = 0;
       std::string name;
};
