#ifndef _TIME_
#define _TIME_

class Time{

friend Time operator++(Time &);
public:
	Time()
	:Time(0,0) {}

	Time(int m, int s)
	:min(m) , sec(s) {}
private:
	int min;
	int sec;
};

Time operator++(Time &t)
{
	t.sec += 1;
	if(t.sec == 60)
	{
		t.sec = 0;
		t.min += 1;
		if(t.min == 60)
			t.min = 0;
	}
	std::cout << t.min << ":" << t.sec << std::endl; 
	return Time(t.min,t.sec);
}

#endif
