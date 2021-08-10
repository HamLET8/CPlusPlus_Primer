#ifndef SALES_DATA
#define SALES_DATA
#include<ostream>
#include<string>



//Avoid use using tag , because duplication code during the link mislead  the source code 
//using si = double;



class  Sales_data{

public:


	Sales_data(const std::string &id , unsigned us , double pc)
	:bookNo(id) , unit_sold(us) , price(pc),revenue(us*pc)
	{
	}

	Sales_data()
	:Sales_data("x",0,0)
       	{
	}

	Sales_data(const std::string &id)
	:Sales_data(id,0,0)
	{
	}
	
	Sales_data(std::istream &is)
	:Sales_data()
	{
		is >> bookNo >> unit_sold >> price ;
	       	revenue = unit_sold * price;	
	//read(is,*this);
	}
friend 	std::ostream &print(std::ostream &os , Sales_data &s);
friend 	std::istream &read(std::istream &is , Sales_data &s);
//friend 	Sales_data add(const Sales_data& s1, const Sales_data& s2)
	std::string isbn() {return this->bookNo;}
	Sales_data& combine(const Sales_data &rhs);
private:

	std::string bookNo ;
	double price ;
	unsigned unit_sold ;
	double revenue ;
};


Sales_data& Sales_data::combine(const Sales_data &rhs)
{
		unit_sold += rhs.unit_sold;
		revenue += rhs.revenue;

		return *this;

}

Sales_data add(const Sales_data& s1, const Sales_data& s2)
{
	Sales_data sum = s1;
	sum.combine(s2);
	return sum;
}

std::istream &read(std::istream &is , Sales_data &s)
{

	is>>s.bookNo >>s.unit_sold >> s.price;

	s.revenue = s.price * s.unit_sold;

	return is;
}

std::ostream &print(std::ostream &os , Sales_data &s)
{
	os <<"ISBN:  " <<s.bookNo << " " <<"Copies:  "<< s.unit_sold << "  " <<"Renevue:  " << s.revenue;
	return os;
}

#endif
