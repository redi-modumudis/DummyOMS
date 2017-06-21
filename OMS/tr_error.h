#ifndef TR_ERROR
#define TR_ERROR
/*This is geniric class for handling error in this application.
 *This class should be part of very class in this applciation(recommend aggregation) 
 *
 *Best practice: 
 *Success (or) failure always update the error No and Msg 
 *
 */
#include "string"

using namespace std;
enum TR_ERRNO
{
	TR_ERROR_NOT_SET=-1,//means error is not handled by the 
	TR_ERROR_SUCCESS=0,
	TR_ERROR_UNKNOWN_ERROR=1001,
	TR_ERROR_INVALID_INPUT=1002,
	TR_ERROR_UNABLE_TO_OPEN_FILE=1003,
	TR_ERROR_UNABLE_TO_CREATE_FILE=1004,
	TR_ERROR_SYMBOL_NOT_FOUND=1005,
	TR_ERROR_ZERO_ORDERS=1006,
};

#define TR_ERRORMSG_NOT_SET "Error not set"//means error is not handled by the 
#define TR_ERRORMSG_SUCCESS "Success"
#define TR_ERRORMSG_UNKNOWN_ERROR "Unknow error"
#define TR_ERRORMSG_INVALID_INPUT "Invalid input data, please check the documentation for more details."
#define TR_ERRORMSG_UNABLE_TO_OPEN_FILE "Unable to open the file."
#define TR_ERRORMSG_UNABLE_TO_CREATE_FILE "Unable to create the file."
#define TR_ERRORMSG_SYMBOL_NOT_FOUND "Symbol doesn't exist."
#define TR_ERRORMSG_ZERO_ORDERS "Zero orders. Please Load Orders."

class TRError
{
public:
	virtual void setNo(int no);
	virtual int getNo();
	virtual void setMsg(const string msg);
	virtual const string& getMsg();
	virtual void set(int no,const string msg);
	virtual void set(TRError &error);
	TRError();
	virtual ~TRError();
private:

	int No;
	string Msg;
	/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
	*/
		TRError(const TRError& );
		TRError& operator=(const TRError&);
};

#endif