#ifndef HELPER_HPP
#define HELPER_HPP

#include <ctime>
#include <string
#include <sstream>

namespace Helper
{
    template <class T>

    std::string ToString(const T &);

    struct DateTime
    {
        DateTime()
        {
            time_t seconds;
            time (&seconds);

            struct tm *info = localTime(&seconds);

            D = info->tm_mday;
            m = info->tm_mon + 1;
            y = 1900 + info->tm_year;
            M = info->tm_min;
            H = info->tm_hour;
            S = info->tm_sec;
        }

		DateTime(int D, int m, int y, int M, int H, int S) : D(D), m(m), y(y), M(M), H(H), S(S) {}
		DateTime(int D, int m, int y) : D(D), m(m), y(y), M(0), H(0), S(0) {}

		DateTime Now() const
		{
			return DateTime(); // return current date time
		}

		std::string GetDateString() const
		{
			// Generate the current date that is correctly formatted in string
			return std::string(D < 10 ? "0" : "") + ToString(D) +
				std::string(m < 10 ? ".0" : ".") + ToString(m) + "." + ToString(y);
		}

		std::string GetTimeString(const std::string &sep = ":") const// reference is to default separator which is set to a colon
		{
			// Generate the current time that is correctly formatted in string
			return std::string(H < 10 ? "0" : "") + ToString(H) + sep +
				std::string(M < 10 ? "0" : "") + ToString(M) + sep +
				std::string(S < 10 ? "0" : "") + ToString(S);
		}

		std::string GetDateTimeString(const std::string &sep = ":") const
		{
			return GetDateString() + " " + GetTimeString(sep);
		}
	};

	template <class T>

	std::string ToString(const T &e) // only able types that supports the insertion operator
	{
		std::ostringstream s;
		s << e;
		return s.str();
	}

	// OPTIONAL FUNCTION FOR DEBUGGING PURPOSES

	void WriteAppLog(const std::string &s) // reference to const string we wish to log
	{
		std::ofstream file("AppLog.txt", std::ios::app); // app stands for append file
		file << "[" << Helper::DateTime().GetDateTimeString() << "]" << "\n" << s << std::endl << "\n";
		file.close();
	}
    };
}

#endif // HELPER_HPP
