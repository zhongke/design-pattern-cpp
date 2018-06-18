#include <memory>

#include "Duck.hh"
#include "RubberDuck.hh"
#include "FlyWithRocket.hh"

int main(int argc, char *argv[])
{
       std::unique_ptr<Duck> duck = std::make_unique<RubberDuck>();

       duck->display();
       duck->fly();
       duck->quack();

       duck->setFlyBehavior(std::make_shared<FlyWithRocket>());
       duck->fly();

       return 0;
}
