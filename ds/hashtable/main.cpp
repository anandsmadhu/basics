/*
 * main.cpp
 *
 *  Created on: Apr 2, 2019
 *      Author: amadhusoodan
 */


#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

int main(void)
{
	hashfunction hashObj;
	string name ="";

	hashObj.addItem("Paul", "Locha");
	hashObj.addItem("Kim", "Iced Mocha");
	hashObj.addItem("Emma", "Strawberry Smoothie");
	hashObj.addItem("Annie", "Hot Chocolate");
	hashObj.addItem("Sarah", "Passion Tea");
	hashObj.addItem("Pepper", "Caramel Mocha");
	hashObj.addItem("Mike", "Chai Tea");
	hashObj.addItem("Steve", "Apple Cider");
	hashObj.addItem("Bill", "Root Beer");
	hashObj.addItem("Marie", "Skinny Latte");
	hashObj.addItem("Susan", "Water");
	hashObj.addItem("Joe", "Green Tea");
	
	//hashObj.printTable();
	//hashObj.printItemsInIndex(8);

	while(name !="exit")
	{
		cout << "Search for : " ;
		cin >> name;
		if (name!="exit")
		{
			hashObj.findDrink(name);
		}
	}




	return(0);
}



