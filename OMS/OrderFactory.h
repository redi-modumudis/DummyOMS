
#ifndef TR_OrderFactory
#define TR_OrderFactory
#include<string>
#include"Order.h"
#include<list>
#include <iostream>
#include <fstream>
#include <sstream>
#include "tr_error.h"
using namespace std;

class OrderFactory
{
public:
	TRError *error;
	list<Order*>* CreateOrderFromFile(const string fileName);
	void SaveOrdersToFile(const list <Order*>& orders, const string fileName);
	OrderFactory();
	virtual ~OrderFactory();
private:
/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
*/
	OrderFactory(const OrderFactory& );
	OrderFactory& operator=(const OrderFactory&);
protected:
	Order* CreateOrder(const string strOrder);
};


#endif