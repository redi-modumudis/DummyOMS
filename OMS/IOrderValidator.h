#ifndef TR_IOrderValidator
#define TR_IOrderValidator

#include "Order.h"

class IOrderValidator
{
	
public:
	virtual int Validate(const Order &order)=0;
	virtual ~IOrderValidator();
};

inline IOrderValidator::~IOrderValidator()
{
}
#endif
