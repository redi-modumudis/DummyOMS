#ifndef TR_IStockExchange
#define TR_IStockExchange
#include <string>
#include "tr_error.h"

class IStockExchange
{
public:
	
	virtual double getPrice(const std::string symbl)=0;
	
	virtual ~IStockExchange()
	{
	
	}
};



#endif
