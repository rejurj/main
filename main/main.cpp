#include <iostream>

class Log
{public:
	enum level
	{

	};
	
public:
	const int Loglevelerror = 0;
	const int Loglevelwarning = 1;
	const int Loglevelinfo = 2;

private:
	int m_Loglevel=Loglevelinfo;
public:
	void setlevel(int a)
	{
		m_Loglevel = a;

	}
	void warn(const char* message)
	{
		if (m_Loglevel>=Loglevelwarning)
		std::cout <<"[Warning]:"<< message << std::endl;

	}
	void error (const char* message)
	{
		if (m_Loglevel >= Loglevelerror)

		std::cout << "[Error]:" << message << std::endl;

	}
	void info(const char* message)
	{
		if (m_Loglevel >= Loglevelinfo)

		std::cout << "[Info]:" << message << std::endl;

	}

};

int main()
{
Log log;
    log.setlevel(log.Loglevelwarning);
	log.warn("Hello!");
	log.info("Hello!");
	log.error("Hello!");
	std::cin.get();
}