## Note! I no longer use Github. This repo may be out of date.

All my ex-Github repos are now stored and maintained at [my personal website](http://www.robertgrantstats.co.uk/code.html).

Why did I leave Github? Because I consider the compulsory imposition of 2-factor authentication to be inappropriate for people writing software, including cryptography, which can attract severe punishments in certain jurisdictions. We all know that the organisations that hold the 2nd factors (mobile telephony providers, tech companies) are compromised, willingly or otherwise, in their relationships with security agencies, benign or otherwise.

Why not just close it down? Because you might use it programmatically, via http or API, and I don't want to hurt you (by breaking your code) while trying to help you (by raising issues of privacy and confidentiality).




# timelogger
Lightweight CLI adds system date and time to a CSV file.

Run ./timelogger and it will append the current system time and date to the file log.csv. I like to have this run by a keyboard shortcut for convenient data collection through the day.

Before use, you should replace my hard-coded log.csv location with your own. Then, you compile the .cpp file. If you are new to that, you would do something like this: ```g++ timelogger.cpp -o timelogger -std=c++11``` (that's for Mac/Linux; should work in MinGW (for example) as well, but **this is not tested in any way on Windows**.)

If you prefer a different date format, you can change this in the .cpp file at the line:
```std::strftime(chtime, sizeof(chtime), "%T %a %d/%m/%Y", std::localtime(&tm));``` And see [this C++ reference page](https://en.cppreference.com/w/cpp/chrono/c/strftime) for the available time format codes.
