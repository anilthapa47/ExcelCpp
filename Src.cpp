#pragma once

#include <iostream>
#include <random>
using namespace std;
vector <string> names;
class network
{
private:
	int count_;
	int nodeAddr_;
public:
	netowrk(int x, int y)
		: cout_(x), nodeAddr_(y){}
	int nodecount()const
	{
		return cout_ += 1;
	}
};

int Return()
{
	return 5;
}
int RandomFun()
{
	int result = rand() % 10;
	cout << "you have some random number " << endl;
	return result;
}

string logMsg()
{
	string hello = "Here is extra lib";
	return hello;
}

