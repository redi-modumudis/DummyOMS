#include "gtest/gtest.h"
#include "OrderValidator.h"

using namespace std;
class OrderValidatorTest : public ::testing::Test
{
public:
protected:
		OrderValidator* validator;
		OrderValidatorTest()
		{
			validator = new OrderValidator;
			
		}
		virtual ~OrderValidatorTest()
		{
			delete validator;
		}
};

TEST_F(OrderValidatorTest, Validate_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderValidatorTest, ValidateInvalidOrder_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
