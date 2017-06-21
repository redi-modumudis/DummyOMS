#include "gtest/gtest.h"
#include "Presenter.h"

using namespace std;
class CmdPresenterTest : public ::testing::Test
{
public:
protected:
		Presenter* cmdPresenter;
		CmdPresenterTest()
		{
			cmdPresenter = new Presenter;
			
		}
		virtual ~CmdPresenterTest()
		{
			delete cmdPresenter;
		}
};
TEST_F(CmdPresenterTest, ShowCmdOptions_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(CmdPresenterTest, SaveOrders_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(CmdPresenterTest, ShowError_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdPresenterTest, LoadOrders_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdPresenterTest, PrintCommandLineOptions_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}

TEST_F(CmdPresenterTest, ProcessCommand_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}


TEST_F(CmdPresenterTest, GetMainMsg_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdPresenterTest, DisplayOrders_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdPresenterTest, LoadOrdersFromFile_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdPresenterTest, CaliculatePrice_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}