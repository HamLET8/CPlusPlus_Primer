#ifndef _HEADER_
#define _HEADER_

std::unordered_map<std::string,std::string> buildMap(std::ifstream &map_file)
{
	std::unordered_map<std::string,std::string> trans_map;

	std::string key,value;

	while(map_file >> key && getline(map_file,value))
	{
		if(value.size() > 1)
		//	trans_map[key] = value.substr(1);
		trans_map.insert({key,value.substr(1)});
	}

	return trans_map;
}

const std::string &transform(const std::string &s, const std::unordered_map<std::string,std::string> &m)
{
	auto map_it = m.find(s);
	if(map_it != m.end())
		return map_it->second;
	else
		return s;
}

void word_transform(std::ifstream &map_file, std::ifstream &input,std::ofstream &output)
{
	auto trans_map = buildMap(map_file);
	std::string text;

	while(getline(input,text))
	{
		std::istringstream stream(text);
		std::string word;
		bool firstword = true;
		while(stream >> word)
		{
			if(firstword)
				firstword = false;
			else 
				output << " " ;
			output << transform(word,trans_map);
		}
		output << std::endl;
	}
}




#endif
