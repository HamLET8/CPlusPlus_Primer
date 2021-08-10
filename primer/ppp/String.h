#ifndef _STRING_
#define _STRING_

using std::cout;

class String{

public:
	String(char *head);

	void reverse();
	void print() const;


private:
	char head[100];
};

String::String(char *head)
{
	for(int i = 0; i < 100; ++i)
	{
		head[i] = 0;
	}
}

void String::reverse()
{
	char temp;
	for(int i = 0; i < 100/2; ++i)
	{
		temp = head[i];
		head[i] = head[100-1-i];
		head[100-1-i] = temp;
	}
}

void String::print()
{
	for(int i = 0; i < 100; ++i)
		cout << head[i];
}
#endif
