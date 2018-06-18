#pragma once

#include "DisplayElement.hh"
#include "Observer.hh"
#include "Subject.hh"

class StatisticsDisplay : public DisplayElement, Observer
{
public:
       explicit StatisticsDisplay(std::shared_ptr<Subject> data)
              : Observer{"STATISTICS"}
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

