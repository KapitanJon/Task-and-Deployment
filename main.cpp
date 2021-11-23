# include <iostream>
# include <vector>
# include <string>
# include "startup.h"
# include "robots.h"
# include <sstream>
using namespace std;

int main(){	
	WelcomeMessage();
	int userinput = TakeInput();
	Robot robots[userinput];
	for(int i = 0; i < userinput; ++i){
		robots[i].SetSerialNumber(100 + i);
		robots[i].PrintSerialNumber();	
	}
	cout << endl;
	TakeTasks();
	cout << endl;	
	string usrStr;
	cin >> usrStr;
	string newStr = ReturnTasks(usrStr);
	vector<int> taskvec = ReturnVec(newStr);
	for(int i = 0; i < userinput; ++i){		
		int x = taskvec.at(i);		
		robots[i].AssignTask(x);
		robots[i].PrintTask();	
	}
	cout << endl;
   int choice = 1;
   int AssignedTask;
	cout << "THE TASK ALLOCATION WILL NOW START .... YOU CAN STOP THE PROGRAM ANYTIME BY ENTERING A NEGATIVE NUMBER OR ZERO" << endl;   
	while (choice > 0){
		bool Io = false;        	
		cout << "Do you have a task? ";
        	cin >> choice;
        	for (int i = 0; i < userinput && Io == false; ++i){            
			int Task = robots[i].GetTasks();		
			if(Task == choice){
				if(robots[i].GetAvail() == true){
					robots[i].SetAvail();
					int robby = robots[i].GetSerialNumber();
					cout << "I have allocated robot " << robby <<" to task " << choice << endl;
					Io = true;
				}	
			}
		}
		if(Io == false){
			       cout << "Sorry I do not have any more robots that can do task " << choice << endl;
		}
	}
   
	
	return 0;
}
