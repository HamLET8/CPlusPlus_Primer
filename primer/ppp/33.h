#ifndef _TREE_
#define _TREE_

class Tree
{
public:	
	void grow(int years)
	{
		ages +=years;
	}
	void showAge() const { std::cout << ages << std::endl; }
private:
	int ages = 0;
};

#endif
