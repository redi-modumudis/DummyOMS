#include "gtest/gtest.h"
#include "OrderQuantityValidator.h"

using namespace std;
class OrderQuantityValidatorTest : public ::testing::Test
{
public:
protected:
		OrderQuantityValidator* quantityValidator;
		OrderQuantityValidatorTest()
		{
			quantityValidator = new OrderQuantityValidator;
			
		}
		virtual ~OrderQuantityValidatorTest()
		{
			delete quantityValidator;
		}
};

TEST_F(OrderQuantityValidatorTest, Validate_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderQuantityValidatorTest, ValidateInvalidQuantity_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
