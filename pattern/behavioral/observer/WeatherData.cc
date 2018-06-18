#include "WeatherData.hh"
#include "Observer.hh"

void
WeatherData::add(Observer* observer)
{
       observers.push_back(observer);
}

void
WeatherData::remove(Observer* observer)
{
       observers.erase(
              std::find_if( observers.begin()
                          , observers.end()
                          , [&observer](Observer* ob) {
                                   return ob->name == observer->name;
                            }));
}

void
WeatherData::notifyObservers()
{
       for (auto ob : observers) {
              ob->update(temperature, humidity, pressure);
       }
}

void
WeatherData::setMeasurements( float temperature
                            , float humidity
                            , float pressure)
{
       this->temperature = temperature;
       this->humidity    = humidity;
       this->pressure    = pressure;

       notifyObservers();
}
