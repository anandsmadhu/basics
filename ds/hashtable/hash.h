/*
 * hash.h
 *
 *  Created on: Apr 2, 2019
 *      Author: amadhusoodan
 */
#include <cstdlib>
#include <iostream>
#include <string>



using namespace std;

#ifndef HASH_H_
#define HASH_H_

class hashfunction
{
private:
	static const int tableSize = 10;

	struct item
	{
		string name;
		string drink;
		item* next;
	};
	item* HashTable[tableSize];

public:

	hashfunction();
	int Hash (string key);
	void addItem(string name, string drink);
	int NumberOfIntemsInIndex(int index);
	void printTable();
	void printItemsInIndex(int index);
};


#endif /* HASH_H_ */
