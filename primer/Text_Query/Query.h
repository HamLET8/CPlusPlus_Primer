#ifndef _QUERY_
#define _QUERY_

class Query
{
	friend Query operator ~(const Query &);
	friend Query operator &(const Query &, const Query &);
	friend Query operator |(const Query &, const Query &);
public:
    Query(const std::string &);		//realize after the defination of the class WordQuery
    QueryResult eval(const TextQuery &t) const { return p->eval(t); }
    std::string rep() const { return p->rep(); }

private:
    Query(std::shared_ptr<Query_base> query) :p(query) { cout << "Query.Ptr_cons" << endl; }
    std::shared_ptr<Query_base> p;
};

std::ostream &
operator<<(std::ostream &os, const Query &query)
{
	return os << query.rep();
}
#endif
