#include "CurrentConditionDisplay.hh"
#include "StatisticsDisplay.hh"
#include "WeatherData.hh"


int main(int argc, char *argv[])
{
       auto data = std::make_shared<WeatherData>();
       CurrentConditionDisplay current{data};
       StatisticsDisplay statistic{data};

       data->setMeasurements(1.2, 2.3, 3.4);

       data->remove(&current);
       data->setMeasurements(1.2, 2.3, 3.4);

       data->setMeasurements(2.3, 3.4, 4.5);
       return 0;
}
