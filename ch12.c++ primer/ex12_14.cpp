#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

struct destination{};
struct connection{};

connection connect(destination*);

void disconnect(connection);

void f(destination &d);

void end_connection(connection *p);

int main()
{
	return 0;
}

connection connect(destination *)
{
	connection conn;
	return  conn;
}

void f(destination &d)
{
	connection conn = connect(&d);
	std::shared_ptr<connection> p_conn(&conn, end_connection);
}

void end_connection(connection *p)
{
	disconnect(*p);
}
