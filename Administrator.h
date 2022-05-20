#include "Report.h"
#include "FitnessTrainers.h"
#pragma once
//Uni directional Association with Fitnesstrainers
//Unidirectional association with Report

class Administrator
{
	private:
		char a_name[20];
		int a_id;
		char a_email[50];
		int a_contact;
		char a_address[100];
		Report *rep[100];
		FitnessTrainers *fitness[10];
	public:
		Administrator();
		Administrator(char admin_name[],int admin_id,char admin_email[],int admin_contact,char admin_address[]);
		void displayDetails();
		void generateReports(Report *Repo);
		void updatePlans();
		void updateInventory();
		void addupInventory();
		void deleteInventory();
		void changeTrainer();
		void changeScheduleTime();
		void addTrainer ( FitnessTrainers *f );
		void addReport ( Report *r );
		~Administrator();
};
