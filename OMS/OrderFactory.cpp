#include "OrderFactory.h"


Order* OrderFactory::CreateOrder(const string strOrder)
{
	Order *order=new Order;
	if(!strOrder.empty() )
	{
		//Tokenize the stringOrder. Pre-requisite- Order of the Order should be ID,SYMBOL,Price,Quantity,Side
		std::istringstream ss(strOrder);
		std::string token;
		//set Id
		std::getline(ss, token, ',') ;
		order->setId(std::stoi(token) );
		//set Symbol
		std::getline(ss, token, ',') ;
		order->setSymbol(token );
		//set Quantity
		std::getline(ss, token, ',') ;
		order->setQuantity(std::stoi(token));
		//set Side
		std::getline(ss, token, ',') ;
		order->setSide(token);

	}
	else
	{
		// for now -ignore, so it will skip the empty line
	}

	return order;

}

list<Order*>* OrderFactory::CreateOrderFromFile(const string fileName)
{
	list<Order*>* Orders=new list<Order*>;
	ifstream file(fileName);
	if (file.is_open())
	{
		string strOrder;
		while(getline(file,strOrder))
		{
			
			auto order=CreateOrder(strOrder);
			Orders->push_back(order);
		}
		file.close();
		error->set(TR_ERROR_SUCCESS,TR_ERRORMSG_SUCCESS);
	}
	else
	{
		error->set(TR_ERROR_UNABLE_TO_OPEN_FILE,TR_ERRORMSG_UNABLE_TO_OPEN_FILE);
		
	}
	return Orders;
		
}
void OrderFactory::SaveOrdersToFile(const list <Order*>& orders, const string fileName)
{
	std::ofstream file(fileName);
	if(file.is_open())
	{
		for(std::list<Order*>::const_iterator iterOrder = orders.begin();
			iterOrder != orders.end();
			++iterOrder)
		{
				file<<(*iterOrder)->getId()<<","<<(*iterOrder)->getSymbol()<<","<<(*iterOrder)->getQuantity()<<","<<(*iterOrder)->getSide()<<endl;
		}			
		file.close();
		error->set(TR_ERROR_SUCCESS,TR_ERRORMSG_SUCCESS);
	}
	else
	{
		error->set(TR_ERROR_UNABLE_TO_CREATE_FILE,TR_ERRORMSG_UNABLE_TO_CREATE_FILE);
		
	}


}

OrderFactory::OrderFactory()
{
	error=new TRError;
}

OrderFactory::~OrderFactory()
{
	
	delete error;
	error=NULL;
	
}
