#pragma once
#include "Inventory.h"
#include "Plans.h"

//Unidirectional association with Plans
//Unidirectional association with Inventory
//Unidirectional association with Report

class Payment{
	private:
		int transaction_id;
		int quantity;
		int amount;
		char type[20];
		Plans *plan[10];
		Inventory *Invent[100];
	public:
		Payment();
		Payment(int trans_id,int count,int price,char pay_type[],char plan_name[],char stock[]);
		void displayDetails();
		void checkPayment();
		void confirmPayment();
		void generateTransactionId();
		~Payment();
};
