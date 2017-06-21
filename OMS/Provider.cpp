#pragma once
#ifndef Provider_CPP
#define Provider_CPP

#include "Provider.h"

template <class Item>
std::list<Item*>* Provider<Item>::GetItems()
{
	return Items;
}

template <class Item>
void Provider<Item>::Add(Item *item)
{
	Items->push_back(item);
}

template<class Item>
void Provider<Item>::ClearItems()
{
	if (!Items->empty())
		Items->clear();
}

template<class Item>
void Provider<Item>::AddRange(std::list<Item*> *items)
{

	for(typename std::list<Item*>::const_iterator tmpItem = items->begin();
        tmpItem != items->end();
        ++tmpItem)
    {
		this->Items->push_back(*tmpItem);
    }
}

template <class Item>
Provider<Item>::Provider()
{
	Items=new std::list<Item*>;
}

template<class Item>
Provider<Item>::~Provider()
{
	if(Items!= nullptr){
		if (!Items->empty())
		{
			
			for(auto itr=Items->begin();itr!=Items->end();++itr) {
				Item *item=*itr;
				delete item;
			}
			Items->clear();
		}

		delete Items;
	}
}
#endif
