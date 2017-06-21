#ifndef TR_CMDPresenter
#define TR_CMDPresenter
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <iostream>
#include "OrderProvider.h"
#include "Order.h"
#include<conio.h>
#include <stdio.h>  
#include "Cmd.h"

using namespace std;

#define MAIN_MENU '9'
#define EXIT_APPL '0'
#define LOAD_FILEORDERS '1'
#define SAVE_FILEORDERS '2'
class Presenter: public Cmd
{
public:

	Presenter();
	~Presenter();
	
	void ShowCmdOptions();
	char SaveOrders();
	void ShowError(const int errorNo, const std::string errorMsg) const;
	char LoadOrders();
	TRError *error;
private:
	static const string PrintCommandLineOptions();
	
	static void ProcessCommand();
	
	std::string GetMainMsg();
	void DisplayOrders();
	void LoadOrdersFromFile(const string fileName);
	void SaveOrdersToFile(const string fileName);
	double CaliculatePrice(const std::string symbol,int quantity);

	OrderProvider *orderProvider;
	DummyStockExchange *DummyExchange;
	/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
	*/
	Presenter(const Presenter& );
	Presenter& operator=(const Presenter&);
};


#endif