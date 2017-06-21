#ifndef TR_CMD
#define TR_CMD
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include "OrderProvider.h"
#include "Order.h"
#include<conio.h>
#include <stdio.h>  

using namespace std;

class Cmd
{
public:
	Cmd();
	~Cmd();


	void ShowError(const int errorNo, const std::string errorMsg) const;
	static void ClearConsole();
	static void gotoXY(int x, int y);
	TRError error;
private:

	Cmd(const Cmd& );
	Cmd& operator=(const Cmd&);
};


#endif