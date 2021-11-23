# include <iostream>
# include <vector>
# include <string>
# include "robots.h"
using namespace std;

void Robot::SetSerialNumber(int num){
	serial = num;
}

int Robot::GetSerialNumber(){
	return serial;	
}

void Robot::PrintSerialNumber(){
	cout << serial << ", ";
}

void Robot::AssignTask(int x){
	tasks = x;
	}


int Robot::GetTasks(){
	return tasks;
}

void Robot::PrintTask(){
	cout << serial << " is assigned task " << tasks << ", ";}

bool Robot::GetAvail(){
	return availability;
}

void Robot::SetAvail(){
	availability = false;
}

void Robot::PrintAvail(){
	cout << availability << endl;
}
