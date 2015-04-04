#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <set>

void toVector(std::ifstream &fin, std::vector<std::string> &v);

std::size_t
search(const std::string &kWord, const std::vector<std::string> &v,
std::map<std::string, std::set<int>> &m);

void printLines(const std::string &kWord, const std::vector<std::string> &v,
	std::map<std::string, std::set<int>> &m);

int main()
{
	std::ifstream fin("chenxun.txt");
	std::vector<std::string> v;

	//! store the file in the vector
	toVector(fin, v);

	while (true)
	{
		//! codes for input
		std::cout << "enter:\n";
		std::string keyWord;
		std::cin >> keyWord;
		if (keyWord == "q")
		{
			std::cout << "\nBye!\n";
			break;
		}


		//! create the map to store the query result and get the count of occurrence
		std::map<std::string, std::set<int>> m;
		std::size_t count = search(keyWord, v, m);


		//! print the key word and count of occurrence.
		std::cout << "["
			<< keyWord
			<< "]:\n"
			<< count
			<< " appears times in lines:\n";


		//! print lines in which the key word appears
		printLines(keyWord, v, m);
	}

	return 0;
}

//! store the file in the vector
void toVector(std::ifstream &fin, std::vector<std::string> &v)
{
	std::string line;
	while (std::getline(fin, line))  v.push_back(line);
}

//! store the query result in the map and return the amout of occurrence.
std::size_t
search(const std::string &kWord, const std::vector<std::string> &v,
std::map<std::string, std::set<int>> &m)
{
	std::size_t count = 0;

	//! each line
	for (std::size_t index = 0; index != v.size(); ++index)
	{
		std::stringstream lineStream(v[index]);
		std::string word;

		//! each word
		while (lineStream >> word)
		if (word == kWord)
		{
			++count;
			m[kWord].insert(index);
		}
	}

	return count;
}

//! print lines in which the key word appears
void printLines(const std::string &kWord, const std::vector<std::string> &v,
	std::map<std::string, std::set<int> > &m)
{
	//! fetch the set that stores the query result
	std::set<int>&  set = m[kWord];

	//! print each line in which the key word appears
	for (const auto &index : set)
	{
		std::cout << "( Line "
			<< index
			<< " ) : "
			<< v[index]
			<< "\n";
	}

}