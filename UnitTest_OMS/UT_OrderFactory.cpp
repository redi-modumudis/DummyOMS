#include"OrderProvider.h"
#include "gtest/gtest.h"



using namespace std;
class OrderFactoryTest : public ::testing::Test
{
public:
protected:
		OrderFactory* orderFactory;
		OrderFactoryTest()
		{
			orderFactory = new OrderFactory;
			
		}
		virtual ~OrderFactoryTest()
		{
			delete orderFactory;
		}
};
TEST_F(OrderFactoryTest, CreateOrderFromFile_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderFactoryTest, SaveOrdersToFile_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(OrderFactoryTest, CreateOrder_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
