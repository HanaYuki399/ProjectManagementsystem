#include <iostream>
using namespace std;
#include <vector>
#include <string>
#include "Tasks.h"

Tasks::Tasks()
{
	taskName = "";
	taskDescription = "";
}

Tasks::Tasks(string a, string b)
{
	taskName = a;
	taskDescription = b;
}
void Tasks:: addMem(Members *m1)
{
	// Our doctor will add this patient
	mem.push_back(m1);

	// and the patient will also add this doctor
	m1->addTask(this);
}
