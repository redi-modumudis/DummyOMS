#ifndef TR_IOrderProvider
#define TR_IOrderProvider

#include <string>
using namespace std;
class IOrderProvider
{
public:
		virtual void LoadOrders(string fileName)=0;
		virtual void SaveOrders(string fileName)=0;
		virtual ~IOrderProvider();
};

inline IOrderProvider::~IOrderProvider()
{
	//in future if required, do the cleaning 
}
#endif
