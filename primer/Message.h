#ifndef
#define
using namespace std;

class Message{
friend class Folder;
public:
	Message(const string &s = string())
		:contents(s) { }
	
	Message(const Message &);
	Message &operator=(const Message &);
	~Message();

	void save(Folder&);
	void remove(Folder&);
	

private:
	string		contents;
	set<Folder*>	folders;	
	void add_to_Folders(const Message&);
	void remove_from_Folders();
	void remFolder(const Folder&);
	void addFolder(const Folder&);
};
#endif
