#include "Milk.hh"

/*
std::string Milk::description()
{
       return {"with milk "};
}
*/

float Milk::cost()
{
       return bv->cost() + 0.10;
}
