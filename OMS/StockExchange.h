#ifndef TR_PriceExchange
#define TR_PriceExchange
#include "IStockExchange.h"
#include"tr_error.h"
#include "DummyStockExchange.h"
enum ExchangeType
{
	Dummy,
	ExchangeX,
	ExchangeY
};
class StockExchange
{
public:
	
	StockExchange( );
	virtual ~StockExchange();
	IStockExchange* getExchange(ExchangeType	exchange);
};




#endif
