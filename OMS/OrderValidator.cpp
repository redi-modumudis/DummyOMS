
#include "OrderValidator.h"

int OrderValidator::Validate(const Order& order)
{
	int status=TR_ORDER_VALID;

	//validation1
	status=OrderQuantityValidator::Validate(order);
	if(status!=TR_ORDER_VALID) return status;
	//validation2
	//validation3
	//validation4 .....so on
	return status;
}

OrderValidator::OrderValidator()
{
	error=new TRError;
}

OrderValidator::~OrderValidator()
{
	if(error)
	{
		delete error;
		error=nullptr;
	}
}

