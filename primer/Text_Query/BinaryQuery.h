#ifndef _BINARYQUERY_
#define _BINARYQUERY_

class BinaryQuery: public Query_base{

protected:
    BinaryQuery(const Query &l, const Query &r, std::string op)
	    :lhs(l), rhs(r), opS(op) { cout << "Bin.cons" <<endl; }
    
    std::string rep() const override { return "( " + lhs.rep() + opS + rhs.rep() + " )" ;}
    virtual ~BinaryQuery(){};	
    Query lhs, rhs;
    std::string opS;

};

/***************/

class AndQuery : public BinaryQuery{
    friend Query operator&(const Query &, const Query &);


    AndQuery(const Query &l , const Query &r)
	:BinaryQuery(l,r,"&")  { cout << "And.cons" << endl; }			//constructor of base class

    QueryResult eval(const TextQuery &t) const override;
public:
    ~AndQuery(){}
};

inline Query operator&(const Query &op1, const Query &op2)
{
	return std::shared_ptr<Query_base>(new AndQuery(op1,op2));
}

QueryResult AndQuery::eval(const TextQuery &t) const 
{
	auto left = lhs.eval(t), right = rhs.eval(t);

	auto ret_line = make_shared<set<line_no>>();

	set_intersection(left.begin(), left.end(), right.begin(), right.end(), inserter(*ret_line, ret_line->begin()));

	return QueryResult( rep(), ret_line, left.get_file() ); 
}
/**************/

class OrQuery :public BinaryQuery{
    friend Query operator|(const Query &, const Query &);

    OrQuery(const Query &l , const Query &r)
	    :BinaryQuery(l,r,"|") { cout << "Or.cons" << endl; }

    QueryResult eval(const TextQuery &t) const override;
public:
    ~OrQuery() {}
};

inline Query operator|(const Query &op1, const Query &op2)
{
	return shared_ptr<Query_base>(new OrQuery(op1,op2));
}

QueryResult OrQuery::eval(const TextQuery &t) const 
{
	auto left = lhs.eval(t), right = rhs.eval(t);
	auto ret_line = make_shared<set<line_no>>();

	ret_line->insert(left.begin(), left.end());
	ret_line->insert(right.begin(), right.end());

	return QueryResult( rep(), ret_line, left.get_file() );
}
#endif
