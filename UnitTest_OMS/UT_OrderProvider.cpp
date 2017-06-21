#include"OrderProvider.h"
#include "StockExchange.h"
#include "gtest/gtest.h"



using namespace std;
class OrderProviderTest : public ::testing::Test
{
public:
protected:
		OrderProvider* orderProvider;
		OrderProviderTest()
		{
			orderProvider = new OrderProvider;
			
		}
		virtual ~OrderProviderTest()
		{
			delete orderProvider;
		}
};

TEST_F(OrderProviderTest, LoadOrders_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}


TEST_F(OrderProviderTest, SaveOrders_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderProviderTest, LoadOrdersInvalidFile_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(OrderProviderTest, SaveOrdersInvalidFile_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
