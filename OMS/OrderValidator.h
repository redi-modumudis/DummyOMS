#ifndef TR_OrderValidator
#define TR_OrderValidator

/* Use the decorative valiudator to validate the Order
 */

#include "Order.h"
#include "OrderQuantityValidator.h"

class OrderValidator: public OrderQuantityValidator 
{
public:
	TRError *error;
	virtual int Validate(const Order &order);
	OrderValidator();
	virtual ~OrderValidator();
	
};

#endif