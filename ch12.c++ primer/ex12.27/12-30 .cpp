#include<iostream>
#include<string>
#include<memory>
#include<vector>
#include<map>
#include<set>
#include<fstream>
#include<sstream>

using namespace std;

string make_plural(size_t ctr, const string word, const string &ending)
{
	return (ctr > 1) ? word + ending : word;
}

class QueryRsult;
class TextQuery
{
public:
	using line_no = std::vector<std::string>::size_type;
	TextQuery(std::ifstream &);
	QueryRsult query(const std::string&) const;
private:
	std::shared_ptr<std::vector<std::string>> file;
	std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream &is) :file(new vector<string>)
{
	string text;
	while (getline(is, text))
	{
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while (line >> word)
		{
			auto &lines = wm[word];
			//shared_ptr<std::set<line_no>> &lines = wm[word];
			if (!lines)
				lines.reset(new set<line_no>);
			lines->insert(n);
		}
	}

}

class QueryRsult{
	friend std::ostream &print(std::ostream &, const  QueryRsult &);
public:
	using line_no = std::vector<std::string>::size_type;
	QueryRsult(std::string s,
		std::shared_ptr<std::set<line_no>> p,
		std::shared_ptr<std::vector<std::string>> f) :
		sought(s), lines(p), file(f){}

private:
	std::string sought;
	std::shared_ptr<std::set<line_no>> lines;
	std::shared_ptr<std::vector<string>> file;
};

QueryRsult TextQuery::query(const string &sought) const
{
	static shared_ptr<std::set<line_no>> nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if (loc == wm.end())
		return QueryRsult(sought, nodata, file);
	else
		return QueryRsult(sought, loc->second, file);
}

ostream &print(ostream &os, const QueryRsult &qr)
{
	os << qr.sought << "occurs" << qr.lines->size() << " "
		<< make_plural(qr.lines->size() ,"time","s") << endl;

	for (auto num : *qr.lines)
		os << num + 1 << " " << *(qr.file->begin() + num) << endl;
	return os;
}

void runQueries(ifstream &infile)
{
	TextQuery tq(infile);
	while (true)
	{
		cout << "enter word to look for, or q to quit:";
		string word;
		if (!(cin >> word) || word == "q")
			break;
		print(cout, tq.query(word)) << endl;
	}
}


int main()
{
	ifstream infile("chenxun.txt");
	runQueries(infile);

	return 0;
}