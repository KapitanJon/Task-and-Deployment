# include <iostream>
# include <string>
# include<vector>
#include<sstream>
# include <algorithm>
using namespace std;
void WelcomeMessage(){
	cout << "Welcome To The Lunar Robot Swarm Task Allocation Program!\n How many robots do you have? " << endl;
}

int TakeInput(){
	int userInput;
	cin >> userInput;
	return userInput;  
}
void TakeTasks(){
	cout << "Please enter with comma separation the tasks (ranging from 1 - 10) that the 5 robots are capable of doing: " << endl;
}

string ReturnTasks(string usrStr){
	string str = usrStr;
	int n = str.length();
	for(int i = 0; i < n ; i++){
		if(str[i] == ','){		
		str.erase(str.begin() + i);		
			}	
		} 
	return str;
	}
vector<int> ReturnVec(string usrStr){	
	string str = usrStr;
	int n = str.length();
	vector<int> vec(n);	
	for(int i = 0; i < n; i++){
		int x = str[i] - '0';
		vec.at(i) = x;		
		}
	return vec;
}
