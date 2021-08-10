#ifndef _BULK_QUOTE_
#define _BULK_QUOTE_

#include"15_3.h"
#include<string>

class Bulk_quote:public Quote{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book, double p, std::size_t n, double disc)
		:Quote(book,p), min_qty(n), discount(disc) {}

	double net_price(size_t cnt) const override
	{
		if( cnt > min_qty)
		       return cnt* (1-discount)*price;
		else
			return cnt * price;
	}	

	void debug(ostream &) const override;
private:
	std::size_t min_qty;
	double discount;
};

void Bulk_quote::debug(ostream &os) const
{
	Quote::debug(os);
       	os << "min_quantity: " << min_qty << "\t discount: " << discount ;	
}
#endif
