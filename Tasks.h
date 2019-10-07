
class Tasks
{
private:
	string taskName;
	string taskDescription;
	vector <Members*> mem;
public:
	Tasks();
	Tasks(string, string);

	void addMem(Members*);
	
};
