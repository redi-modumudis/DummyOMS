#include "OrderQuantityValidator.h"

int OrderQuantityValidator::Validate(const Order& order)
{
	if (order.getQuantity()>0)
	{
		return TR_ORDER_VALID;
	}
	else
	{
		return TR_ORDER_INVALID;
	}
}

OrderQuantityValidator::~OrderQuantityValidator()
{
	
	
	delete error;
	error=NULL;
	
}

OrderQuantityValidator::OrderQuantityValidator()
{
	error=new TRError;
}
