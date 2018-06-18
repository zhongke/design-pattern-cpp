#pragma once

#include "DisplayElement.hh"
#include "Observer.hh"
#include "Subject.hh"

class CurrentConditionDisplay : public DisplayElement
                              , public Observer
{
public:
       explicit CurrentConditionDisplay(std::shared_ptr<Subject> data)
              : Observer{"CURRENT"}
              , dataM{data}
       {
              dataM->add(this);
       }

       virtual void update( float temperature
                          , float humidity
                          , float pressure) override;

       virtual void display() override;

private:
       std::shared_ptr<Subject> dataM;
       float temperature;
       float humidity;
       float pressure;
};

