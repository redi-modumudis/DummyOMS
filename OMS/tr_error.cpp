#include "tr_error.h"	

void TRError::setNo(int no)
{
	No=no;
}
int TRError::getNo()
{
	return No;
}
void TRError::setMsg(const string msg)
{
	Msg=msg;
}
const string& TRError::getMsg()
{
	return Msg;
}
TRError::TRError()
{
	No=TR_ERROR_NOT_SET;
	Msg="";
}
TRError::~TRError()
{
	No=TR_ERROR_NOT_SET;
	Msg="";
}
void TRError::set(int no,const string msg)
{
	No=no;
	Msg=msg;
}

void TRError::set(TRError& error)
{
	No=error.getNo();
	Msg= error.getMsg();
}
