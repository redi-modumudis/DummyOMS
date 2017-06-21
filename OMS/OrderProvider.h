#ifndef TR_OrderProvider
#define TR_OrderProvider


#include "ProviderDef.h"
#include "IOrderProvider.h"
#include "OrderFactory.h"
#include "StockExchange.h"
#include "OrderValidator.h"
using namespace std;

class OrderProvider :public Provider<Order>, public  OrderFactory, public StockExchange , public OrderValidator
{
public:
	TRError *error;
	void LoadOrders(string fileName);
	void SaveOrders(string fileName);
	OrderProvider();
	~OrderProvider();
private:
	/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
	*/
	OrderProvider(const OrderProvider& );
	OrderProvider& operator=(const OrderProvider&);
};


#endif