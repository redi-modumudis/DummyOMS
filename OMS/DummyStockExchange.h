#ifndef TR_DummyStockExchange
#define TR_DummyStockExchange
#include "IStockExchange.h"
#include "tr_error.h"
#include <map>

class DummyStockExchange: public IStockExchange
{
private:
	std::map<std::string, double> priceIndex;

public :
	TRError *error;
	void refresh();
	double getChange();
	double getPrice(const std::string symbl);
	DummyStockExchange();
	~DummyStockExchange();
};

#endif