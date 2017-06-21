#ifndef TR_PriceBase
#define TR_PriceBase
#include <map>
/*
 *price for the symbol is stored here
 */

class PriceBase
{
	std::map<std::string, int> priceIndex;
public:

	double getPrice(const std::string symbl);
};

#endif