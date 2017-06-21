
#include "OrderValidator.h"

int OrderValidator::Validate(const Order& order)
{
	int status=TR_ORDER_VALID;

	//validation1
	status=OrderQuantityValidator::Validate(order);
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
	
	
	delete error;
	error=nullptr;
	
}

