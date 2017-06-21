#include "gtest/gtest.h"
#include "Order.h"

using namespace std;
class OrderTest : public ::testing::Test
{
	protected:
		Order* order;
		OrderTest()
		{
			order = new Order;
			order->setOrder("1001","IBD",15000,100,"Buy");
		}
		virtual ~OrderTest()
		{
			delete order;
		}
};

TEST_F(OrderTest, setStatus_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(OrderTest, getStatus_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderTest, setId_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}


TEST_F(OrderTest, getId_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(OrderTest, setSymbl_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(OrderTest, getSymbl_functional_test)
{
	string actual("IBD");
	string expected=order->getSymbol();
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderTest, setPrice_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}


TEST_F(OrderTest, getPrice_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderTest, getQuantity_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderTest, setQuantity_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}


