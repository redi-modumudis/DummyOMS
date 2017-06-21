#include "StockExchange.h"


StockExchange::StockExchange()
{
}

StockExchange::~StockExchange()
{
}

IStockExchange* StockExchange::getExchange(ExchangeType exchange)
{
	if(exchange==Dummy)
	{
		return new DummyStockExchange();
	}
	else if (exchange==ExchangeX)
	{
		//to do
	}
	else if(exchange==ExchangeY)
	{
		//to do
	}

	return nullptr;
}
