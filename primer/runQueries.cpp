#include<iostream>
#include"TextQuery.h"
#include"QueryResult.h"



void runQueries(std::ifstream &infile)
{
	TextQuery tq(infile);

	while(true)
	{
		std::cout << "enter word to look for ,or q to quit: ";

		std::string s;


