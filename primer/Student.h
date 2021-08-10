#ifndef _STUDENT_
#define _STUDENT_

class Student{

friend std::ostream& printS(const Student &);
public:
	Student(const std::string & n, int s)
	:name(n), score(s) {}

private:
	std::string name = "";
	int score = 0;
};

std::ostream& printS(const Student &stu)
{
	std::string ssc;
	int sc = stu.score;
	switch(sc/10)
	{
		case 9: case 10:
			ssc = "A";
			break;
		case 8: 
			ssc = "B";
			break;
		case 7:
			ssc = "C";
			break;
		case 6:
			ssc = "D";
			break;
		default:
			ssc = "E";
			break;
	}
	return std::cout << "name: " << stu.name << "\tscore: " << ssc ;
}


#endif
