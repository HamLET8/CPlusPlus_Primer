#ifndef _Screen_
#define _Screen_

/************* friend functions *************/



class Window_mgr{


public:
	using ScreenIndex = std::string::size_type;

	void clear(ScreenIndex);

private:
	std::vector<Screen> screens{Screen(20,40,' ')};

}





class Screen{
public:
	using pos =std::string::size_type;
//constructor	
	Screen() = default;

       	Screen(pos wd, pos ht)
	:width(wd) , height(ht) 
	{}

       	Screen(pos wd, pos ht , char c)
	:width(wd) , height(ht) ,contents(wd*ht,c)
	{}	 


/************* member functions *************/

	Screen &display(std::ostream &os)
	{ do_display(os); return *this ;}

	const Screen &display(std::ostream &os) const	
	{ do_display(os); return *this ;}

	Screen &move(pos row , pos col);

	inline pos get() const { return cursor; }
	inline char get(pos row, pos col) const
	{
		return contents[row*width + col];
	}

	
	Screen &set(pos row, pos col ,char c);
	
	Screen &set(char c)
	{ contents[cursor] = c; return *this;}

	pos curpos() const { return cursor;}


	friend void Window_mgr::clear(ScreenIndex);
/************* data members *************/
private:

	void do_display(std::ostream &os) const
	{ os << contents ;}

	pos cursor = 0;
	unsigned width = 40;
	unsigned height = 30;
	std::string contents;
};

inline Screen & Screen::move(pos row , pos col){

	pos tep = row * width;
	cursor = tep + col;

	return *this;
}

Screen &Screen::set(pos row, pos col ,char c)
{
	contents[row*width + col] = c;
	return *this;
}




/************* friend functions *************/

void Window_mgr::clear(ScreenIndex i)
{
	Screen &s = screens[i];

	s.contents = std::string(s.width * s.height , ' ' );
}


#endif
