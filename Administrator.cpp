#include "Administrator.h"
#include <cstring>

Administrator::Administrator(){
	strcpy(a_name,"");
	a_id=0;
	strcpy(a_email,"");
	a_contact=0;
	strcpy(a_address,"");
}
Administrator::Administrator(char admin_name[],int admin_id,char admin_email[],int admin_contact,char admin_address[]){
	strcpy(a_name,admin_name);
	a_id=admin_id;
	strcpy(a_email,admin_email);
	a_contact=admin_contact;
	strcpy(a_address,admin_address);
}

void Administrator::displayDetails(){
	
}
void Administrator::{
	
}
void Administrator::updatePlans(){
	
}
void Administrator::updateInventory(){
	
}
void Administrator::addupInventory(){
	
}
void Administrator::deleteInventory(){
	
}
void Administrator::changeTrainer(){
	
}
void Administrator::changeScheduleTime(){
	
}

void addTrainer ( FitnessTrainers *f ){
	
}
void addReport ( Report *r ){
			
}
Administrator::~Administrator(){
	cout << "Destructor runs" << endl;
}
