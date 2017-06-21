#include"Provider.h"
#include "StockExchange.h"
#include "gtest/gtest.h"
#include "Order.h"


using namespace std;
template<class Item>
class ProviderTest : public ::testing::Test
{
public:
protected:
		Provider<Item>* provider;
		ProviderTest()
		{
			provider = new Provider<Item>;
			
		}
		virtual ~ProviderTest()
		{
			delete provider;
		}
};

typedef ::testing::Types<Order> Item;
TYPED_TEST_CASE_P(ProviderTest);
TYPED_TEST_P(ProviderTest, Add_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TYPED_TEST_P(ProviderTest, ClearItems_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TYPED_TEST_P(ProviderTest, AddRange_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
REGISTER_TYPED_TEST_CASE_P(ProviderTest,
                           Add_functional_test, ClearItems_functional_test,AddRange_functional_test);