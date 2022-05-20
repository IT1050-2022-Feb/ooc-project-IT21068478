#include "Payment.h"
#include "Plans.h"
#include <cstring>
using namespace std;

Payment::Payment(){
	transaction_id=0;
	quantity=0;
	amount=0;
	strcpy(type,"");
}
Payment::Payment(int trans_id,int count,int price,char pay_type[],char plan_name[],char stock[])
{
	transaction_id=trans_id;
	quantity=count;
	amount=price;
	strcpy(type,pay_type);
}
void Payment::displayDetails(){
	
}
void Payment::checkPayment(){
	
}
void Payment::confirmPayment(){
	
}
void Payment::generateTransactionId(){
	
}
Payment::~Payment(){
	cout << "Destructor runs" << endl;
}
