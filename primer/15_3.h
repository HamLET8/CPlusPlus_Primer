#ifndef _QUOTE_
#define _QUOTE_

using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ostream;
using std::map;
using std::set;

class Quote{
public:
	Quote() = default;
	Quote(const string& book, double sales_price)
	:bookNo(book), price(sales_price){}

	string isbn() const{
		return bookNo;
	}
	virtual double net_price(std::size_t n) const
	{
		return n*price;
	}
	virtual void debug(ostream& ) const;

	virtual ~Quote() = default;

private:
	string bookNo;
protected:
	int price;
};

void Quote::debug(ostream &os) const
{
	os << "bookNo: " << bookNo << "\t price: " << price <<"\t";
}

double print_total(ostream &os,const Quote &item, std::size_t n)
{
	double ret = item.net_price(n);
	os << "ISBN: " << item.isbn() << "\t #sold: " << n << "\t total due: " << ret << endl;
	return ret;
}

#endif
