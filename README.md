# timelogger
Lightweight CLI adds system date and time to a CSV file.

Run ./timelogger and it will append the current system time and date to the file log.csv. I like to have this run by a keyboard shortcut for convenient data collection through the day.

Before use, you should replace my hard-coded log.csv location with your own. Then, you compile the .cpp file. If you are new to that, you would do something like this: ```g++ timelogger.cpp -o timelogger -std=c++11``` (that's for Mac/Linux; should work in MinGW (for example) as well, but **this is not tested in any way on Windows**.)

If you prefer a different date format, you can change this in the .cpp file at the line:
```std::strftime(chtime, sizeof(chtime), "%T %a %d/%m/%Y", std::localtime(&tm));``` And see [this C++ reference page](https://en.cppreference.com/w/cpp/chrono/c/strftime) for the available time format codes.
