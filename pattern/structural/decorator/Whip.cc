#include "Whip.hh"

/*
std::string Milk::description()
{
       return {"with milk "};
}
*/

float Whip::cost()
{
       return bv->cost() + 0.05;
}
