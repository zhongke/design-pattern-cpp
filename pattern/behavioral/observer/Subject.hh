#pragma once

#include <vector>
#include <memory>

class Observer;

class Subject
{
public:
       virtual ~Subject() {}

       virtual void add(Observer* observer) = 0;
       virtual void remove(Observer* observer) = 0;

       virtual void notifyObservers() = 0;



};
