
//Association between payment
//Inheritance with Equipments
//Inheritance with Supplements
//Aggregation with RegisteredUser
#pragma once
#include "Payment.h"
class Inventory
{
	protected:
		int stock_id;
		char stock_name[20];
		int stock_price;
		Payment *pay1;
		RegisteredUser *RG [5];
	public:
		Inventory();
		Inventory(int id_stock,char name_stock[],int price_stock);
		void displayDetails();
		void addRegisteredUser ( RegisteredUser *RG1, RegisteredUser *RG2, RegisteredUser *RG3, RegisteredUser *RG4, RegisteredUser *RG5);
		void sales();
		~Inventory();
};
