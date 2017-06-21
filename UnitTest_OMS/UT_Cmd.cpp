#include "gtest/gtest.h"
#include "Presenter.h"

using namespace std;
class CmdTest : public ::testing::Test
{
public:
protected:
		Cmd* cmdTest;
		CmdTest()
		{
			cmdTest = new Cmd;
			
		}
		virtual ~CmdTest()
		{
			delete cmdTest;
		}
};
TEST_F(CmdTest, ClearConsole_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}
TEST_F(CmdTest, gotoXY_functional_test)
{
	int actual=0;
	int expected=0;
	ASSERT_EQ(expected,actual);
}