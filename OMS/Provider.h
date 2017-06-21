#ifndef TR_Provider
#define TR_Provider

#include <list>
template<class Item>
class Provider
{

private:
	std::list<Item*> *Items;
public:
	std::list<Item*>* GetItems();
	void Add(Item *item);
	void ClearItems();
	void AddRange(std::list<Item*> *items);
	Provider();
	virtual ~Provider();

private:
/*
		Note:Unless needed, always better to disable default copy constructor & 
		assignemnt operaters to avoid shallow copying which would result in 
		memory leak.
*/
		Provider(const Provider& );
		Provider& operator=(const Provider&);
};

#endif