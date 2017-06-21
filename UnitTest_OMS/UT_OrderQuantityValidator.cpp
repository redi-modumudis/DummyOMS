#include "gtest/gtest.h"
#include "OrderQuantityValidator.h"
#include "Order.h"
using namespace std;
class OrderQuantityValidatorTest : public ::testing::Test
{
public:
protected:
		OrderQuantityValidator* quantityValidator;
	//Order(string id,string symbol,  double price,int quantity,string side);
		
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
	//Arrange
	int expected=TR_ORDER_VALID;
	Order order;
	order= Order("1001","APPL",10.2,10,"Buy");

	//Act
	int actual=quantityValidator->Validate(order);

	//Assert
	ASSERT_EQ(expected,actual);
}

TEST_F(OrderQuantityValidatorTest, ValidateInvalidQuantity_negetive_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
