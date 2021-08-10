#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<set>
#include<unordered_map>
#include<utility>
#include"header.h"
using std::vector;
using std::cout;
using std::endl;
using std::string;
using std::cin;
using std::ifstream;
using std::set;

/*	word transformation ( ifs  ruler, ifs input,ofs output);
 *	#1 build a map from word to phrase; map<string ,string >  build_map(ifs ruler);
 *	#2 fetch the word in input file, then transform the word to phrase by builded map;
 *		string tansform_w (map<string,string> , string word);
 */
 
int main(int argc,char *argv[] )
{

	ifstream ruler(argv[1]); 
	ifstream inp_txt(argv[2]); 
	std::ofstream outp_txt(argv[3]);

	word_transform(ruler,inp_txt,outp_txt);

	return 0;

}
