#pragma once

#include <memory>
#include <vector>

#include "Subject.hh"

class Observer;

class WeatherData : public Subject
{
public:

       virtual void add(Observer* observer) override;

       virtual void remove(Observer* observer) override;

       virtual void notifyObservers() override;

       void setMeasurements( float temperature
                           , float humidity
                           , float pressure);

       std::vector<Observer *> observers;

private:
       float temperature;
       float humidity;
       float pressure;
};
