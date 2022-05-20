#include "Inventory.h"
#include <cstring>
using namespace std;

Inventory::Inventory(){
	stock_id=0;
	strcpy(stock_name,"");
	stock_price=0;
}
Inventory::Inventory(int id_stock,char name_stock[],int price_stock){
	stock_id=id_stock;
	strcpy(stock_name,name_stock);
	stock_price=price_stock;
}
void Inventory::displayDetails(){
	
}
void Inventory::sales(){
	
}

void addRegisteredUser ( RegisteredUser *RG1, RegisteredUser *RG2, RegisteredUser *RG3, RegisteredUser *RG4, RegisteredUser *RG5)
{
	RG[0] = RG1;
	RG[1] = RG2;
	RG[2] = RG3;
	RG[3] = RG4;
	RG[4] = RG5;
	
}
Inventory::~Inventory(){
	cout << "Destructor runs" << endl;
}
