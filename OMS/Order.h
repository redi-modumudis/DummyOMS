
#ifndef TR_Order
#define TR_Order
#include <iomanip> 
using namespace std;

#define TR_ORDER_VALID 2000
#define TR_ORDER_INVALID 2001
#define TR_ORDER_NOTVALIDATED 2002

class Order
{
	public :
		//constructor
		Order::Order();
		void setStatus(int status);
		int getStatus() const;
		Order(string id,string symbol,  double price,int quantity,string side);
		void Order::setOrder(string id,string symbol, double price, int quantity, string side);
		void setId(int id);
		int getId() const;
		void setSymbol(string symbol);
		string getSymbol() const;
		void setPrice( double price);
		 double getPrice() const;
		void setQuantity(int quantity);
		int getQuantity() const;
		void setSide(string side);
		
		string getSide() const;
		Order& operator=(const Order&);

	private:
		static int CURRENT_ID;
		int		Id;
		string	Symbol;
		 double	Price;
		unsigned int		Quantity;
		string	Side; 
		int Status;

	/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
	*/
		//Order(const Order& );
		
};


#endif