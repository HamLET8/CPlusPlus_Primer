#include<iostream>
#include<memory>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<sstream>
#include<map>
#include"QueryResult.h"
#include"TextQuery.h"

using line_no = std::vector<std::string>::size_type;
//class QueryResult;
class TextQuery;

QueryResult TextQuery::query(const std::string &sr)
{
	        static std::shared_ptr<std::set<line_no>> BLANK(new std::set<line_no>);
		auto it  = t_mapped.find(sr);
		if(it != t_mapped.end())	
			return QueryResult(sr,it->second,this->t_line);
		return QueryResult(sr,BLANK,this->t_line);
}
	
