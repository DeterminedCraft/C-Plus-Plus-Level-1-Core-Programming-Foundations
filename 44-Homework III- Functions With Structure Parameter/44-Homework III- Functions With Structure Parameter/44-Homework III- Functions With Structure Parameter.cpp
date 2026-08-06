
#include <iostream>
#include <string>
using namespace std;

/* Output the following program, exactly as it appears:



 **************************** 
 Book Title   : Clean Code
 Publisher    : Prentice Hall
 Weather Today: Sunny
 Temperature  : 22.5 degrees
 **************************** 


*/


struct stBookInfo
{
	string BookTitle;
	string publisher;
};

struct stWeatherInfo
{
	string WeatherCondition;
	string temperature;

};

void ReadBookInfo(stBookInfo &BookInfo)
{
	cout << "Enter Book Title: \n";
	getline(cin, BookInfo.BookTitle);
	cout << endl;

	cout << "Enter Publisher Name: \n";
	getline(cin, BookInfo.publisher);
	cout << endl;
}

void ReadWeatherInfo(stWeatherInfo& WeatherInfo)
{
	cout << "How is the weather today ?: \n";
	getline(cin, WeatherInfo.WeatherCondition);
	cout << endl;

	cout << "What is the temperature: \n";
	getline(cin, WeatherInfo.temperature);
	cout << endl;
}


void PrintBookInfo(stBookInfo BookInfo)
{
	cout << "Book Title  : " << BookInfo.BookTitle << endl;
	cout << "Publisher   : " << BookInfo.publisher << endl;
}

void PrintWeatherInfo(stWeatherInfo WeatherInfo)
{
	cout << "Weather Today: " << WeatherInfo.WeatherCondition << endl;
	cout << "Temperature  : " << WeatherInfo.temperature << endl;

}

void PrintAllBookAndWeatherInfo(stBookInfo BookInfo, stWeatherInfo WeatherInfo)
{
	cout << "****************************\n";
	PrintBookInfo(BookInfo);
	PrintWeatherInfo(WeatherInfo);
	cout << "****************************\n";

}


int main()
{
	stBookInfo BookInfo; 
	stWeatherInfo WeatherInfo;

	ReadBookInfo(BookInfo);
	ReadWeatherInfo(WeatherInfo);
   // All member variables are now initialized in BookInfo & WeatherInfo

	PrintAllBookAndWeatherInfo(BookInfo, WeatherInfo);

	return 0;
}


















































