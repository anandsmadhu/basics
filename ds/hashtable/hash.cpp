/*
 * hash.cpp
 *
 *  Created on: Apr 2, 2019
 *      Author: amadhusoodan
 */
#include <cstdlib>
#include <iostream>
#include <string>
#include "hash.h"


using namespace std;

hashfunction::hashfunction()
{
	for(int i =0; i<tableSize; i++)
	{
		HashTable[i] = new item;
		HashTable[i]->name = "empty";
		HashTable[i]->drink = "empty";
		HashTable[i]->next = NULL;
	}
}

void hashfunction::addItem(string name, string drink)
{
	int index = Hash(name);
	if((HashTable[index] -> name) == "empty")
	{
		HashTable[index] -> name = name;
		HashTable[index] -> drink = drink;
	}
	else
	{
		item *Ptr = HashTable[index];
		item *nPtr = new item;
		nPtr -> name = name;
		nPtr -> drink = drink;
		nPtr -> next = NULL;

		while(Ptr->next !=NULL)
		{
			Ptr = Ptr->next;
		}
		Ptr->next = nPtr;
	}
}

void hashfunction::printItemsInIndex(int index)
{
	item *ptr = HashTable[index];
	if((ptr->name) =="empty")
	{
		cout<<"index = " <<index <<" is empty"<<endl;
	}
	else
	{
		cout<<"index : " <<index <<"contains the following items"<<endl;
		while(ptr!=NULL)
		{
			cout <<"-------------------------"<<endl;
			cout<<"Name is "<<ptr->name<<endl;
			cout<<"Drink is  is "<<ptr->drink<<endl;
			cout <<"-------------------------"<<endl;
			ptr = ptr->next;
		}
	}

}
int hashfunction::NumberOfIntemsInIndex(int index)
{
	int count = 0;
	if(HashTable[index]->name == "empty")
	{
		return (count);
	}
	else
	{
		count++;
		item *Ptr = HashTable[index];
		while(Ptr -> next !=NULL)
		{
			count++;
			Ptr = Ptr->next;
		}
	}
}

void hashfunction::printTable()
{
	int number = 0;
	for(int i=0; i< tableSize; i++)
	{
		number = NumberOfIntemsInIndex(i);
		cout <<"-------------------------"<<endl;
		cout << "index = " <<i<<endl;
		cout << "HashTable[i]-> name = " <<HashTable[i]-> name<<endl;
		cout << "HashTable[i]-> drink = " <<HashTable[i]-> drink<<endl;
		cout << "number of items =  = " <<number<<endl;
	}
}

void hashfunction::findDrink(string name)
{
	int index = Hash(name);
	bool foundName = false;
	string drink;
	item *ptr = HashTable[index];

	while(ptr !=NULL)
	{
		if(ptr->name == name)
		{
			foundName = true;
			drink = ptr->drink;
		}
		ptr = ptr->next;
	}
	if(foundName == true)
	{
		cout << "drink is : " << drink <<endl;
	}
	else
	{
		cout << "drink NOT found : " << endl;
	}
}

int hashfunction::Hash (string key)
{
	int hash = 0;
	int index;

	for(int i =0; i<key.length(); i++)
	{
		hash = (hash+ (int)key[i]) *17;
	}
	index = hash % tableSize;
	return(index);
}

