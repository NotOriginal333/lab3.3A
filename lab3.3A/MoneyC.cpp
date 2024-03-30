#include "MoneyC.h"

#include <iostream>
#include <string>
#include <sstream>

int MoneyC::setFiveHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 500 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fiveHundred = n;
    return 0;
}

int MoneyC::setTwoHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 200 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twoHundred = n;
    return 0;
}

int MoneyC::setOneHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 100 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    oneHundred = n;
    return 0;
}

int MoneyC::setFifty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 50 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fifty = n;
    return 0;
}

int MoneyC::setTwenty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 20 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twenty = n;
    return 0;
}

int MoneyC::setTen(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 10 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    ten = n;
    return 0;
}

int MoneyC::setFive(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 5 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    five = n;
    return 0;
}

int MoneyC::setTwo(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 2 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    two = n;
    return 0;
}

int MoneyC::setOne(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 1 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    one = n;
    return 0;
}

int MoneyC::setFiftyCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 50 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiftyCoins = c;
    return 0;
}

int MoneyC::setTwentyFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 25 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twentyFiveCoins = c;
    return 0;
}

int MoneyC::setTenCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 10 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    tenCoins = c;
    return 0;
}

int MoneyC::setFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 5 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiveCoins = c;
    return 0;
}

int MoneyC::setTwoCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 2 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twoCoins = c;
    return 0;
}

int MoneyC::setOneCoin(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 1 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    oneCoin = c;
    return 0;
}

double operator/(const MoneyC& m, const MoneyC& m1) {
    double res;
    res = m.total / m1.total;
    return res;
}

MoneyC operator/(MoneyC& m, double divisor) {
    if (divisor == 0.0) {
        std::cerr << "Error: Division by zero.\n";
        return m;
    }
    m.total /= divisor;
    return m;
}

double MoneyC::operator+() { // рахує total, тому не може бути френд
    total = 0.0;

    total += fiveHundred * 500;
    total += twoHundred * 200;
    total += oneHundred * 100;
    total += fifty * 50;
    total += twenty * 20;
    total += ten * 10;
    total += five * 5;
    total += two * 2;
    total += one;

    total += fiftyCoins * 0.5;
    total += twentyFiveCoins * 0.25;
    total += tenCoins * 0.1;
    total += fiveCoins * 0.05;
    total += twoCoins * 0.02;
    total += oneCoin * 0.01;

    return total;
}

bool operator==(const MoneyC& m, const MoneyC& m1) {
    return (m.total == m1.total);
}

bool operator>=(const MoneyC& m, const MoneyC& m1) {
    return (m.total >= m1.total);
}

bool operator<=(const MoneyC& m, const MoneyC& m1) {
    return (m.total <= m1.total);
}

bool operator>(const MoneyC& m, const MoneyC& m1) {
    return (m.total > m1.total);
}

bool operator<(const MoneyC& m, const MoneyC& m1) {
    return (m.total < m1.total);
}

bool operator!=(const MoneyC& m, const MoneyC& m1) {
    return (m.total != m1.total);
}

std::string MoneyC::displayTotal() const {
    std::stringstream sout;

    std::string totalStr = std::to_string(total);
    size_t decimalPos = totalStr.find('.');
    if (decimalPos != std::string::npos) {
        totalStr[decimalPos] = ',';
    }

    sout << "Total amount: " << totalStr;
    return sout.str();
}

ostream& operator << (ostream& out, const MoneyC& r)
{
    out << string(r);
    return out;
}

MoneyC& MoneyC::operator ++() {
    total++;
    return *this;
}

MoneyC& MoneyC::operator --() {
    total--;
    return *this;
}

MoneyC MoneyC::operator ++(int) {
    MoneyC n(*this);
    fiveHundred++;
    return n;
}

MoneyC MoneyC::operator --(int) {
    MoneyC n(*this);
    fiveHundred--;
    return n;
}

MoneyC& MoneyC::operator = (const MoneyC& m) {
    fiveHundred = m.fiveHundred;
    twoHundred = m.twoHundred;
    oneHundred = m.oneHundred;
    fifty = m.fifty;
    twenty = m.twenty;
    ten = m.ten;
    five = m.five;
    two = m.two;
    one = m.one;
    fiftyCoins = m.fiftyCoins;
    twentyFiveCoins = m.twentyFiveCoins;
    tenCoins = m.tenCoins;
    fiveCoins = m.fiveCoins;
    twoCoins = m.twoCoins;
    oneCoin = m.oneCoin;

    return *this;
}

istream& operator >> (istream& in, MoneyC& r) {
    std::cout << "Enter the number of banknotes for each denomination:\n";
    std::cout << "500: "; in >> r.fiveHundred;
    std::cout << "200: "; in >> r.twoHundred;
    std::cout << "100: "; in >> r.oneHundred;
    std::cout << "50: "; in >> r.fifty;
    std::cout << "20: "; in >> r.twenty;
    std::cout << "10: "; in >> r.ten;
    std::cout << "5: "; in >> r.five;
    std::cout << "2: "; in >> r.two;
    std::cout << "1: "; in >> r.one;

    std::cout << "Enter the number of coins for each denomination:\n";
    std::cout << "50 kopiyka: "; in >> r.fiftyCoins;
    std::cout << "25 kopiyka: "; in >> r.twentyFiveCoins;
    std::cout << "10 kopiyka: "; in >> r.tenCoins;
    std::cout << "5 kopiyka: "; in >> r.fiveCoins;
    std::cout << "2 kopiyka: "; in >> r.twoCoins;
    std::cout << "1 kopiyka: "; in >> r.oneCoin;
    cout << endl;
    return in;
}


MoneyC::operator string () const
{
    stringstream ss;
    ss << "Banknotes:\n";
    ss << "500: " << getFiveHundred() << std::endl;
    ss << "200: " << getTwoHundred() << std::endl;
    ss << "100: " << getOneHundred() << std::endl;
    ss << "50: " << getFifty() << std::endl;
    ss << "20: " << getTwenty() << std::endl;
    ss << "10: " << getTen() << std::endl;
    ss << "5: " << getFive() << std::endl;
    ss << "2: " << getTwo() << std::endl;
    ss << "1: " << getOne() << std::endl;

    ss << "Coins:\n";
    ss << "50 kopiyka: " << getFiftyCoins() << std::endl;
    ss << "25 kopiyka: " << getTwentyFiveCoins() << std::endl;
    ss << "10 kopiyka: " << getTenCoins() << std::endl;
    ss << "5 kopiyka: " << getFiveCoins() << std::endl;
    ss << "2 kopiyka: " << getTwoCoins() << std::endl;
    ss << "1 kopiyka: " << getOneCoin() << std::endl;

    return ss.str();
}

ostream& operator << (ostream& out, const MoneyC& r)
{
    out << string(r);
    return out;
}

MoneyC::MoneyC() {
    setFiveHundred(0);
    setTwoHundred(0);
    setOneHundred(0);
    setFifty(0);
    setTwenty(0);
    setTen(0);
    setFive(0);
    setTwo(0);
    setOne(0);

    setFiftyCoins(0);
    setTwentyFiveCoins(0);
    setTenCoins(0);
    setFiveCoins(0);
    setTwoCoins(0);
    setOneCoin(0);
}

MoneyC::MoneyC(const Money& m) {
    setFiveHundred(m.getFiveHundred());
    setTwoHundred(m.getTwoHundred());
    setOneHundred(m.getOneHundred());
    setFifty(m.getFifty());
    setTwenty(m.getTwenty());
    setTen(m.getTen());
    setFive(m.getFive());
    setTwo(m.getTwo());
    setOne(m.getOne());

    setFiftyCoins(m.getFiftyCoins());
    setTwentyFiveCoins(m.getTwentyFiveCoins());
    setTenCoins(m.getTenCoins());
    setFiveCoins(m.getFiveCoins());
    setTwoCoins(m.getTwoCoins());
    setOneCoin(m.getOneCoin());
}

MoneyC::MoneyC(const MoneyC& m) {
    fiveHundred = m.fiveHundred;
    twoHundred = m.twoHundred;
    oneHundred = m.oneHundred;
    fifty = m.fifty;
    twenty = m.twenty;
    ten = m.ten;
    five = m.five;
    two = m.two;
    one = m.one;
    fiftyCoins = m.fiftyCoins;
    twentyFiveCoins = m.twentyFiveCoins;
    tenCoins = m.tenCoins;
    fiveCoins = m.fiveCoins;
    twoCoins = m.twoCoins;
    oneCoin = m.oneCoin;
}