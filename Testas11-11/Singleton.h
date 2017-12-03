#include <iostream>
#include <iomanip>
#include <fstream>

#include <string>

class Singleton {
public:

	static Singleton* Instance();
	static const int a = 100;
	static const int b = 100;
	void writeToLogFile();
	void ivedimas(int B[][b], int & n, int & m);
	void spausdinimas(int B[][b], int & n, int & m);
	void desimtukai(int B[][b], int & n, int & m, int & mokinys);
	void desimtkiekis(int B[][b], int & n, int & m, int & mokinys);
	void kiekis(int B[][b], int & n, int & m, int & mokinys);


private:
	Singleton() {};  // Private so that it can  not be called
	Singleton(Singleton const&) {};             // copy constructor is private
	Singleton& operator=(Singleton const&) {};  // assignment operator is private
	static Singleton* m_pInstance;
};