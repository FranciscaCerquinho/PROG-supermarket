#include "Product.h"

Product::Product()
{

}

Product::Product(ifstream & in)
{ // nome ; custo
  // A IMPLEMENTAR
}

void Product::setName(string name)
{
	this->name = name;
}

void Product::setCost(float cost)
{
	this->cost = cost;
}

string Product::getName() const
{
	return name;
}

float Product::getCost() const
{
	return cost;
}