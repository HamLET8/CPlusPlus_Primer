#ifndef _QUERYBASE_
#define _QUERYBASE_

class Query_base{

friend class Query;
protected:
    using line_no = TextQuery::line_no;
    virtual ~Query_base() = default;
private:
    virtual QueryResult eval(const TextQuery &) const = 0;
    virtual std::string rep() const = 0;
};
#endif
