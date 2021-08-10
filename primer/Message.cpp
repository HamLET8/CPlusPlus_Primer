#include"Message.h"
#include"Folder.h"

void Message::save(Folder& f)
{
	addFolder(&f);
	f.addMsg(this);
}

void Message::remove(Folder& f)
{
	remFolder(&f);
	f.remMsg(this);
}

void Messsage::add_to_Folders(const Message &m)
{
	for(auto f :m.folders)
		f->addMsg(this);
}

void Message::remove_from_Folders()
{
	for(auto f :folders)
		f->remMsg(this);
}

void Message::remFolder(const Folder& f)
{
	folders.erase(&f);
}

void Message::addFolder(const Folder& f)
{
	folders.insert(&f);
}

Message::Message(const Message &cp)
:contents:(cp.contents),folders(cp.folders)
{
	add_to_Folders(cp);
}

Message& Message::operator=(const Message &rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders= rhs.folders;
	add_to_Folders(rhs);
	return *this;
}
Message::~Message()
{
	remove_from_Folders();
}
void swap(Message &lhs , Message &rhs)
{
	using std::swap;
	for(auto f : rhs.folders)
		f->remMeg(&rhs);
	for(auto f : lhs.folders)
		f->remMeg(&lhs);

	swap(lhs.folders , rhs.folders);

	for(auto f :rhs.folders)
		f->addMeg(&rhs);
	for(auto f : lhs.folder)
		f->addMeg(&lhs);
}

