#include"tr_error.h"
#include "gtest/gtest.h"



using namespace std;
class TRErrorTest : public ::testing::Test
{
public:
protected:
		TRError* error;
		TRErrorTest()
		{
			error = new TRError;
			
		}
		virtual ~TRErrorTest()
		{
			delete error;
		}
};
TEST_F(TRErrorTest, setNo_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(TRErrorTest, getNo_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(TRErrorTest, setMsg_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(TRErrorTest, getMsg_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(TRErrorTest, setCopyFromErrorObject_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(TRErrorTest, set_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}