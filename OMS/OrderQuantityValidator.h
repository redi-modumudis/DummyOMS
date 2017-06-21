#ifndef TR_OrderQuantityValidator
#define TR_OrderQuantityValidator

#include "OrderQuantityValidator.h"
#include"Order.h"
#include "IOrderValidator.h"
#include "tr_error.h"

class OrderQuantityValidator : public IOrderValidator
{
	
public:
	TRError *error;
	virtual int Validate(const Order &order);
	virtual ~OrderQuantityValidator();
	OrderQuantityValidator();
};

#endif