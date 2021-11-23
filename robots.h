#ifndef ROBOTS_H_INCLUDED
#define ROBOTS_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;
class Robot{
	public:
		void SetSerialNumber(int num);
		int GetSerialNumber();
		void PrintSerialNumber();
		void AssignTask(int x);
		void PrintTask();
		void TaskManager();
		int GetTasks();
		bool GetAvail();
		void SetAvail();
		int serial;
		void PrintAvail();	
	private:
		bool availability = true;
		int tasks;

};


#endif // ROBOTS_H_INCLUDED