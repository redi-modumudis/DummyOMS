#include "OrderProvider.h"


void OrderProvider::LoadOrders(string fileName)
{
	list<Order*> *Orders = OrderFactory::CreateOrderFromFile(fileName);
	int errorno=OrderFactory::error->getNo();
	string errormsg=OrderFactory::error->getMsg();
	OrderProvider::error->set(errorno,errormsg);
	ClearItems();
	int orderStatus=TR_ORDER_VALID;
	for(std::list<Order*>::const_iterator iterOrder = Orders->begin();
        iterOrder != Orders->end();
        ++iterOrder)
    {
		orderStatus=OrderValidator::Validate(*(*iterOrder));
		(*iterOrder)->setStatus(orderStatus);
		if(orderStatus==TR_ORDER_VALID){
			Add(*iterOrder);
		}
		//else ignore it
    }
	
	
	delete Orders;
	Orders=nullptr;
	
}

void OrderProvider::SaveOrders(string fileName)
{

	list<Order*> *Orders =GetItems();
	if(Orders->empty())
	{
		error->set(TR_ERROR_ZERO_ORDERS, TR_ERRORMSG_ZERO_ORDERS);
	}
	else{
		SaveOrdersToFile(*Orders,fileName);
	}
}

OrderProvider::OrderProvider(): StockExchange()
{
	error=new TRError;
}

OrderProvider::~OrderProvider()
{
	
	
	delete error;
	error=nullptr;
	
}
