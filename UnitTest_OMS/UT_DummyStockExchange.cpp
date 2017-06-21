#include "gtest/gtest.h"
#include "DummyStockExchange.h"

using namespace std;
class DummyStockExchangeTest : public ::testing::Test
{
public:
protected:
		DummyStockExchange* exchange;
		DummyStockExchangeTest()
		{
			exchange = new DummyStockExchange;
			
		}
		virtual ~DummyStockExchangeTest()
		{
			delete exchange;
		}
};
TEST_F(DummyStockExchangeTest, refresh_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(DummyStockExchangeTest, getChange_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(DummyStockExchangeTest, getPrice_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(DummyStockExchangeTest, getPriceWithInvalidSymbol_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
