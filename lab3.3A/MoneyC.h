#pragma once
#include "Money.h"
#include <string>
#include <sstream>
#include <iostream>

class MoneyC :
    private Money
{
private:
	double total;

	int fiveHundred;
	int twoHundred;
	int oneHundred;
	int fifty;
	int twenty;
	int ten;
	int five;
	int two;
	int one;

	int fiftyCoins;
	int twentyFiveCoins;
	int tenCoins;
	int fiveCoins;
	int twoCoins;
	int oneCoin;

public:
	MoneyC();
	MoneyC(const Money&);
	MoneyC(const MoneyC& m);
	~MoneyC() { };

	int setFiveHundred(int n);
	int setTwoHundred(int n);
	int setOneHundred(int n);
	int setFifty(int n);
	int setTwenty(int n);
	int setTen(int n);
	int setFive(int n);
	int setTwo(int n);
	int setOne(int n);

	int setFiftyCoins(int c);
	int setTwentyFiveCoins(int c);
	int setTenCoins(int c);
	int setFiveCoins(int c);
	int setTwoCoins(int c);
	int setOneCoin(int c);

	int getFiveHundred() const { return fiveHundred; };
	int getTwoHundred() const { return twoHundred; };
	int getOneHundred() const { return oneHundred; };
	int getFifty() const { return fifty; };
	int getTwenty() const { return twenty; };
	int getTen() const { return ten; };
	int getFive() const { return five; };
	int getTwo() const { return two; };
	int getOne() const { return one; };

	int getFiftyCoins() const { return fiftyCoins; };
	int getTwentyFiveCoins() const { return twentyFiveCoins; };
	int getTenCoins() const { return tenCoins; };
	int getFiveCoins() const { return fiveCoins; };
	int getTwoCoins() const { return twoCoins; };
	int getOneCoin() const { return oneCoin; };

	double getTotal() const { return total; };

	double operator+();

	friend double operator/(const MoneyC&, const MoneyC& m1);
	friend MoneyC operator/(MoneyC& m, double divisor);
	friend bool operator==(const MoneyC&, const MoneyC&);
	friend bool operator>=(const MoneyC&, const MoneyC& m1);
	friend bool operator<=(const MoneyC&, const MoneyC& m1);
	friend bool operator>(const MoneyC&, const MoneyC& m1);
	friend bool operator<(const MoneyC&, const MoneyC& m1);
	friend bool operator!=(const MoneyC&, const MoneyC& m1);

	MoneyC& operator ++();
	MoneyC& operator --();
	MoneyC operator ++(int);
	MoneyC operator --(int);

	std::string displayTotal() const;
	std::string toString() const;
	MoneyC& operator = (const MoneyC& m);

	operator string() const;

	friend ostream& operator << (ostream&, const MoneyC&);
	friend istream& operator >> (istream&, MoneyC&);
};
