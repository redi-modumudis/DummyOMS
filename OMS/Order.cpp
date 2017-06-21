#include"Order.h"

//int Order::CURRENT_ID=1001;
void Order::setOrder(string id,string symbol,  double price, int quantity, string side){
	Symbol = symbol;
	Price = price;
	Quantity =quantity;
	Side=side;
	
}

void Order::setId(int id)
{
	Id=id;
}

int Order::getId() const
{
	return Id;
}

Order::Order(){
	Id=0;
	Symbol = "***";
	Price = 0.00;
	Quantity = 0;
	Side="";
	Status=TR_ORDER_NOTVALIDATED;
}
void Order::setStatus(int status)
{
	Status=status;
}
int Order::getStatus() const
{
	return Status;
}

	//constructor
Order::Order(string id,string symbol, double price,int quantity,string side)
{
	Id=0;
	Symbol=symbol;
	Price=price;
	Quantity=quantity;
	Side=side;
	Status=TR_ORDER_NOTVALIDATED;
}

void Order::setSymbol( string symbol)
{
	Symbol=symbol;
}
string Order::getSymbol() const
{
	return Symbol;
}
void Order::setPrice( double price)
{
	Price=price;
}
 double Order::getPrice() const
{
	return Price;
}
void Order::setQuantity(int quantity)
{
	Quantity=quantity;
}
int Order::getQuantity() const
{
	return Quantity;
}
void Order::setSide(string side)
{
	Side=side;
}
string Order::getSide() const
{
	return Side;
}

Order& Order::operator=(const Order& order){
	this->Symbol=order.Symbol;
	this->Price=order.Price;
	this->Id=order.Id;
	this->Quantity=order.Quantity;
	this->Side=order.Side;
	return *this;
}
