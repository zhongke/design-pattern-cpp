#pragma once

#include <memory>
#include "FlyBehavior.hh"
#include "QuackBehavior.hh"

class Duck
{
public:
       explicit Duck( std::shared_ptr<FlyBehavior> flyBehavior
                    , std::shared_ptr<QuackBehavior> quackBehavior);

       virtual ~Duck() {}

       virtual void display() = 0;

       void fly();
       void quack();

       void setFlyBehavior(std::shared_ptr<FlyBehavior> flyBehavior);
       void setQuackBehavior(std::shared_ptr<QuackBehavior> quackBehavior);

private:
       std::shared_ptr<FlyBehavior> flyBehavior;
       std::shared_ptr<QuackBehavior> quackBehavior;

};
