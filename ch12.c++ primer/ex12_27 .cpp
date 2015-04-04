#include<iostream>
#include<string>
#include<memory>
#include<vector>
#include<map>
#include<set>
#include<fstream>
#include<sstream>

using namespace std;

class queryResult;
class textQuery
{
	friend class queryResult;
public:
	textQuery() = default;
	textQuery(std::ifstream &fin);

	const queryResult query(const std::string &word);

private:
	std::shared_ptr<std::vector<std::string>> file;
	std::shared_ptr<std::map<std::string, std::set<int>>> my_map;
};

textQuery::textQuery(std::ifstream &fin) :
	file(std::make_shared<std::vector<std::string>>()),
	my_map(std::make_shared<std::map<std::string, std::set<int>>>())
{
		std::string line;
		while (std::getline(fin, line))
		{
			(*file).push_back(line);
		}
}

class queryResult{
	friend	void print(std::ostream &os, const queryResult &qr);
public:
	queryResult() = default;
	queryResult(const queryResult &qr);
	queryResult(std::size_t c, const std::string &s,
		const std::shared_ptr<std::vector<std::string>> &sp_f,
		const std::shared_ptr<std::map<std::string, std::set<int>>> &sp_m);

	std::size_t getCounter() const { return counter; }

	std::string getQueryWord() const { return queryWord; }

	std::shared_ptr<std::vector<std::string>> get_file() const { return f; }

	std::shared_ptr<std::map<std::string, std::set<int>>> get_my_map() const { return m; }

private:

	//! number of occurrence
	std::size_t counter = 0;

	//! the word being searched
	std::string queryWord = "";

	//! smart pointer to a vector to be storing a file.
	std::shared_ptr<std::vector<std::string>> f = nullptr;

	//! smart pointer to a map to be storing results of querries.
	std::shared_ptr<std::map<std::string, std::set<int>>> m = nullptr;

};

const queryResult textQuery::query(const std::string &qWord)
{
	//! storing the amount of occurrence
	std::size_t counter = 0;

	//! loop through each line
	for (std::size_t i = 0; i != file->size(); ++i)
	{
		//! break into each word
		std::stringstream lineStream((*file)[i]);
		std::string word;
		while (lineStream >> word)
		{
			if (!word.compare(qWord))
			{
				++counter;

				//! add the index of the line into the result map
				(*my_map)[qWord].insert(i);
			}
		}
	}

	//! creare a object holding the result .
	queryResult qResult(counter, qWord, file, my_map);

	return qResult;
}
//copy construct
inline queryResult::queryResult(const queryResult &qr) :counter(qr.getCounter()), 
					queryWord(qr.getQueryWord()),
					f(qr.get_file()),
					m(qr.get_my_map())
{
	cout << 2 << endl;
}

//construct
queryResult::queryResult(std::size_t c, const std::string &str,
	const shared_ptr<std::vector<std::string>> &sp_f,
	const shared_ptr<std::map<std::string, std::set<int>>> &sp_m) :
	counter(c), queryWord(str), f(sp_f), m(sp_m)
{
	cout << 1 << endl;
}

//! a non-member function printing the result of a query.
void print(std::ostream &os, const queryResult &qr)
{
	//! fetch the word being queried.
	const std::string queryWord = qr.getQueryWord();

	//! print the word and occurrence times
	os << "The word ["
		<< queryWord
		<< "] occurs "
		<< qr.getCounter()
		<< " times :\n";

	//! fetch smart pointers to the map and the file
	auto sp_m = qr.get_my_map();
	auto sp_f = qr.get_file();

	//! print each line in which it appears and the corresponding index.
	for (const auto &index : (*sp_m)[queryWord])
		std::cout << "\n(Line "
		<< index
		<< ") "
		<< (*sp_f)[index]
		<< "\n\n";
}

void runQueries(ifstream &infile)
{
	textQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit:";
		string word;
		if (!(cin >> word) || word == "q")
			break;
		print(cout, tq.query(word));
	}
}

int main()
{
	ifstream infile("chenxun.txt");
	runQueries(infile);

	return 0;
}