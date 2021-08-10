#ifndef _WORDQUERY_
#define _WORDQUERY_

class WordQuery : public Query_base{

	friend class Query;
	WordQuery(const std::string &s) :query_word(s) { cout << "Word.cons" << endl; }
	
	QueryResult eval(const TextQuery &t) const { return t.query(query_word); }
	std::string rep() const { return query_word; }

	std::string query_word;

};

inline Query::Query(const std::string &s)
:p(new WordQuery(s))        
{ cout <<"Query.Scons" << endl;}

/*************/

class NotQuery: public Query_base{
friend Query operator ~(const Query &);

NotQuery(const Query &q) :query(q) { cout << "Not.cons" << endl; }

	QueryResult eval(const TextQuery &) const;
        std::string rep()const { return "~( " + query.rep() + " )" ;}

	Query query;

};
inline Query operator~(const Query &s)
{
	return std::shared_ptr<Query_base>(new NotQuery(s));
}

QueryResult NotQuery::eval(const TextQuery &t) const
{
	auto result = query.eval(t);
	
	auto ret_line = make_shared<set<line_no>>();
	auto beg = result.begin();
	auto end = result.end();

	auto sz = result.get_file()->size();
/***********algorithem *********/
	for(size_t n = 0; n != sz ; ++n)
	{
		if(beg == end || *beg != n)
			ret_line->insert(n);
		else if(beg != end)
			++beg;
	}

	return QueryResult(rep(), ret_line, result.get_file() );

}
#endif
