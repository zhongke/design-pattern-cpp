#include "Duck.hh"

Duck:: Duck( std::shared_ptr<FlyBehavior> flyBehavior
           , std::shared_ptr<QuackBehavior> quackBehavior)
       : flyBehavior{flyBehavior}
       , quackBehavior{quackBehavior}
{}

void
Duck::fly()
{
       flyBehavior->fly();
}

void
Duck::quack()
{
       quackBehavior->quack();
}

void
Duck::setFlyBehavior(std::shared_ptr<FlyBehavior> flyBehavior)
{
       this->flyBehavior = flyBehavior;
}

void
Duck::setQuackBehavior(std::shared_ptr<QuackBehavior> quackBehavior)
{
       this->quackBehavior = quackBehavior;
}
