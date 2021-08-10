#ifndef
#define
using namespace std;

class Folder{

public:
	Folder() = default;
	Folder(Folder &);

	Folder& operator=(const Folder &);
	~Folder();


	void addMeg(Message *);
	void remMeg(Message *);	

private:
	set<Message*> messages;
};

void Folder::addMeg(Message *m)
{
	messages.insert(m);
}

void Folder::remMeg(Message *m)
{
	messages.erase(m);
}

#endif
