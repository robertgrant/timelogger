#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <chrono>

using std::endl;
using std::time_t;
using std::ofstream;
using std::ios;
using std::cout;
using std::string;

int main() {
	string stime;
	char chtime[100];
	ofstream logcsv;
	logcsv.open("/Users/robert/git/timelogger/log.csv", ios::out | ios::app);
	std::time_t tm = std::time(nullptr);
	std::strftime(chtime, sizeof(chtime), "%T %a %d/%m/%Y", std::localtime(&tm));
	logcsv << chtime << endl;
  logcsv.close();
  return 0;
}
