#include "Presenter.h"


Presenter::Presenter()
{
	orderProvider= new OrderProvider;
	DummyExchange=new DummyStockExchange;
	error=new TRError;
}

Presenter::~Presenter()
{
	if(orderProvider!=nullptr)
	{
		delete orderProvider;
		orderProvider=NULL;
	}
	if(DummyExchange!=nullptr)
	{
		delete DummyExchange;
		DummyExchange=NULL;
	}
	if(error)
	{
		delete error;
		error=NULL;
	}
}
const string Presenter::PrintCommandLineOptions()
{
	system("COLOR F1");
	string cmdOptions="\bChoose any of the following options-\n\n"
		"1- To load Orders from file & enter then <file name>.\n"
		"2- To save Orders to file & enter then <file name>.\n"
		"\n0-To exit!\n\n"
		"Please enter the command:";
	cout<<cmdOptions;
	return cmdOptions;
}
void Presenter::ShowCmdOptions()
{
	
	ClearConsole();	
	gotoXY(0,0);
	PrintCommandLineOptions();
	
	char command='9';
	do{
		command=_getch();
		cout<<command<<endl;
		switch(command)
		{
			case '1':
			{
				command=LoadOrders();
				break;
			}
			case '2':
			{
				command=SaveOrders();
				break;
			}
			case '9':
			{
				ClearConsole();	
				gotoXY(0,0);
				PrintCommandLineOptions();
				break;		
			}
			default:
			{
				cout<<"Please select valid command option."<<endl;
				break;
			}
		}
	}
	while(command !='0');

			

	
	return;

}
char Presenter::SaveOrders()
{
	char retValue = '0';
	std::string fileName;
	cout<<"Please enter the file name"<<endl;
	std::getline(std::cin,fileName);
	SaveOrdersToFile(fileName);
	cout<<"Orders are saved successfully"<<endl<<endl;
	bool mainMenu = false;
	cout<<"\r"<<std::left<<GetMainMsg()<<"\n"<<endl;
	while(mainMenu == false){
		
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			mainMenu = true;
			retValue='0';
		}
		else if (GetAsyncKeyState(0x39))
		{
			mainMenu = true;
			retValue='9';				
		}
		else if(orderProvider->error->getNo()> 1)
		{
			ShowError(orderProvider->error->getNo(), orderProvider->error->getMsg());
			retValue='9';
		}
	}
	return retValue;
}
void Presenter::ShowError(const int errorNo, const std::string errorMsg) const
{
	cout<<"\n"<<"Error Number:"<<errorNo<<"\tError Message:"<<errorMsg<<endl;
}
char Presenter::LoadOrders()
{
	std::string fileName;
	cout<<"Please enter the file name"<<endl;
	std::getline(std::cin,fileName);
	
	char retValue='0';
	LoadOrdersFromFile(fileName);
	if(error->getNo()==TR_ERROR_SUCCESS){
		ClearConsole();	
		bool exitOption = false;
		while(exitOption == false){
			if (GetAsyncKeyState(VK_ESCAPE))
			{
				exitOption = true;
				retValue='0';
			}
			else if (GetAsyncKeyState(0x39))
			{
				exitOption = true;
				retValue='9';				
			}
		
			gotoXY(0,0);
			DummyExchange->refresh();
			DisplayOrders();
			Sleep(1000);
		}
	}
	else
	{
		ShowError(error->getNo(),error->getMsg());
		retValue=9;
		cout<<"\nPlease enter the command:";
		
	}
	return retValue;
}

void Presenter::ProcessCommand()
{
	
	cout.flush();
	bool exit =false;
	//int i=0;
	while(exit==false)
	 {
		if (GetAsyncKeyState(VK_ESCAPE) )
		{
			exit=true;
		}

	}
	
}


std::string Presenter::GetMainMsg()
{
	string msg="Press 9- To go to main menu.\n"
				"Press Esc- to exit!\n";
	return msg;
}
void Presenter::DisplayOrders()
{

	std::list<Order*>* orders= orderProvider->GetItems();

	//Print the headings
	system("COLOR F2");
	cout<<"\r"<< std::left<<"\n"
		<<setw(10)<<"ID"
		<<setw(10)<<"SYMBOL"
		<<setw(10)<<"QUANTITY"
		<<setw(10)<<"SIDE"
		<<setw(10)<<"PRICE"<<"\n"<<endl;		
	cout<<"\r"<<std::left<<setw(50)<<"==============================================="<<endl;
	
	system("COLOR F0");
	for(std::list<Order*>::const_iterator iterOrder = orders->begin();
        iterOrder != orders->end();
        ++iterOrder)
	{
		cout<<"\r"<< std::left
			<<setw(10)<<( *iterOrder)->getId()
			<<setw(10)<<( *iterOrder)->getSymbol()
			<<setw(10)<<( *iterOrder)->getQuantity()
			<<setw(10)<<(*iterOrder)->getSide()
			<<setw(10)<<CaliculatePrice(( *iterOrder)->getSymbol(),( *iterOrder)->getQuantity())<<"\n"<<endl;	
	}

	cout<<"\r"<<std::left<<GetMainMsg()<<"\n"<<endl;

}
void Presenter::LoadOrdersFromFile(const string fileName)
{
		
	orderProvider->LoadOrders(fileName);
	error->set(orderProvider->error->getNo(),orderProvider->error->getMsg());
	return ;

}

void Presenter::SaveOrdersToFile(const string fileName)
{
	orderProvider->SaveOrders(fileName);
}

double Presenter::CaliculatePrice(const std::string symbol,int quantity)
{
	double totPrice=DummyExchange->getPrice(symbol) * quantity ;
	return totPrice;
}