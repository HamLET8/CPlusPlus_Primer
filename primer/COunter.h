#ifndef _COUNTER_
#define _COUNTER_

class Counter{

public :
	Counter(int c)
	:cnt(c) {}

	void inc() { ++cnt; }
	void dec() { --cnt; }
	
	int showCounter() const { return cnt; }

private:	
	int cnt;
};


#endif
