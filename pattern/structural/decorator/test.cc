#include <iostream>
#include "DarkRoast.hh"

#include "Milk.hh"
#include "Whip.hh"

int main(int argc, char *argv[])
{

       Beverage* bv = new DarkRoast();

       bv = new Milk(bv);
       bv = new Milk(bv);
       bv = new Milk(bv);
       bv = new Whip(bv);

       float cost = bv ->cost();

       std::cout << "cost : " << cost << std::endl;

       return 0;
}
