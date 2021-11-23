#ifndef START_UP_H_INCLUDED
#define START_UP_H_INCLUDED
#include <string>
#include <vector>
using namespace std;

void WelcomeMessage();
int TakeInput();
void TakeTasks();
string ReturnTasks(string usrStr);
vector<int> ReturnVec(string usrStr);
#endif // START_UP_H_INCLUDED