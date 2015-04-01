/*-------------------------------------------------------------------------

7.57答：
class Account {
public:
Account(): amount(0.0) { }
Account(const std::string &s, double amt):
owner(s), amount(amt) { }

void calculate() { amount += amount * interestRate; }
double balance() { return amount; }
public:
static double rate() { return interestRate; }
static void rate(double);
private:
std::string owner;
double amount;
static double interestRate;
static double initRate() { return .0225; }
static const std::string accountType;
static const int period = 30;
double daily_tbl[period];
};


7.58答：
.h文件中rate和vec错误
.c文件中rate和vec错误
更正为：
class Example  {
public:
static double rate;
static const int vecSize = 20;
static vector<double> vec;
};
// example C
#include “example.h”
double Example::rate=6.5;
vector<double> Example::vec(vecSize);



--------------------------------------------------------------------------*/