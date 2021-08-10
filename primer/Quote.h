#ifndef _QUOTE_
#define _QUOTE_

class Quote{

public:
	Quote() = default;
	Quote(const std::string &book, double r)
		:bookNo(book) , price(r) { }
	Quote(Quote &) = default;

	std::string isbn() const { return bookNo;}

	virtual double net_price(std::size_t n) const { return n * price ; }
	virtual void debug() const { std::cout << "private : bookNo\t protected: price" <<std::endl; }
	virtual ~Quote() { std::cout << "base destructor"<< std::endl;};
private:
	std::string bookNo;

protected:
	double price = 0.0; // build-in type uninatialized undefined


};

double print_total(std::ostream &os ,const  Quote &quote, std::size_t n)
{
	double ret = quote.net_price(n);
	os <<"ISBN:  " <<quote.isbn() << " #sold: " << n << "  total due:  " 
		<< ret << std::endl;
	return ret;
}

/************* pure abstract class-> Disc_quote **************/

class Disc_quote: public Quote{
public:
	Disc_quote() = default;
	Disc_quote(std::string name, double price , std::size_t quantity , double disc)
	       :Quote(name,price) , disc_qty(quantity) , discount(disc) { }
	
	
	void debug() const  override {
	       	Quote::debug();
		std::cout << "protected: disc_qty    discount" <<std::endl;
	}
	double net_price(std::size_t) const  = 0;
	virtual ~Disc_quote() { std::cout << "disc destructor"<< std::endl;};
protected:
	std::size_t disc_qty = 0;
	double discount = 0.0;
};
	

/************* strategy-> bulk_discounted ****************/

class Bulk_quote :public Disc_quote{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& book , double pr , std::size_t min , double disc)
		:Disc_quote(book,pr,min,disc) { }
	using Disc_quote::Disc_quote;

	Bulk_quote(Bulk_quote &) = default;

	void debug() const  override {
	       	Disc_quote::debug();
       	}

	double net_price(std::size_t n) const override{ 
		if( n > disc_qty)
			return  n * (1-discount) * price ;
		else 
			return n * price;
	}
	virtual ~Bulk_quote() { std::cout << "bulk destructor"<< std::endl;};

};

/************* strategy-> limit_discounted ****************/

class Limit_quote : public Disc_quote{
public:
	Limit_quote() = default;

	Limit_quote(const std::string book , double pr , std::size_t max , double disc)
	       :Disc_quote(book,pr,max,disc) { }
	
	void debug() const override{	Disc_quote::debug();}
	double net_price(std::size_t n) const override {
		if(n > disc_qty)
			return (n - disc_qty) * price + (disc_qty * (1 - discount) * price);
		else
			return  n * (1 - discount) * price;
	}
};
	

#endif
