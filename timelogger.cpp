#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <chrono>

using std::endl;
using std::time_t;
using std::ofstream;
using std::ios;
using std::stringstream;
using std::string;
using std::to_string; // this will require -std=c++11 when compiling
using std::chrono::system_clock;
using std::ctime;

int main() {
	stringstream sstrm;
	string stime;
	char chtime[100];
	ofstream logcsv;
	logcsv.open("log.csv", ios::out | ios::app);
	std::time_t tm = std::time(nullptr);
  //auto chronotm = system_clock::now();
  //time_t tttm = system_clock::to_time_t(chronotm);
	std::strftime(chtime, sizeof(chtime), "%T %a %d/%m/%Y", std::localtime(&tm));
	//stime = to_string(ctime(&tttm));
	logcsv << chtime << endl;
  logcsv.close();
  return 0;
}
