#include "DummyStockExchange.h"


void DummyStockExchange::refresh()
{

	double change=1.1;
	 for (std::map<std::string,double>::iterator it=priceIndex.begin(); it!=priceIndex.end(); ++it)
	 {
		 change=getChange();
		 it->second=it->second+change;
	 }
    

}

double DummyStockExchange::getChange()
{

	 double i = 0, d = 0;
    i = rand() % 100 - 50; //Gives a number between -50 and +50;
    d = i / 10; //Reduces this number to 10 times--smaller value is better.
    return d;
}

double DummyStockExchange::getPrice(const std::string symbol)
{
	double price;
	 if(priceIndex.find(symbol) != priceIndex.end())
	 {
		 price =priceIndex.find(symbol)->second ;
		 
	 }
	 else
	 {
		 error->set(TR_ERROR_SYMBOL_NOT_FOUND,TR_ERRORMSG_SYMBOL_NOT_FOUND);
		 
	 }
	 return price;
}

DummyStockExchange::DummyStockExchange()
{
	error=new TRError;

	// Insert SYMBL, PRICE in to the map. this will the stating value
    priceIndex.insert(std::make_pair("AAPL", 999));
    priceIndex.insert(std::make_pair("IBM", 2000));
	priceIndex.insert(std::make_pair("MSFT", 70));

}

DummyStockExchange::~DummyStockExchange()
{
	if(error)
	{
		delete error;
		error=NULL;
	}
}


