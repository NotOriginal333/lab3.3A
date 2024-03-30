#include "MoneyO.h"

#include <iostream>
#include <string>
#include <sstream>

int MoneyO::setFiveHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 500 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fiveHundred = n;
    return 0;
}

int MoneyO::setTwoHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 200 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twoHundred = n;
    return 0;
}

int MoneyO::setOneHundred(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 100 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    oneHundred = n;
    return 0;
}

int MoneyO::setFifty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 50 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    fifty = n;
    return 0;
}

int MoneyO::setTwenty(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 20 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    twenty = n;
    return 0;
}

int MoneyO::setTen(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 10 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    ten = n;
    return 0;
}

int MoneyO::setFive(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 5 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    five = n;
    return 0;
}

int MoneyO::setTwo(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 2 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    two = n;
    return 0;
}

int MoneyO::setOne(int n) {
    if (n < 0) {
        std::cerr << "Error: Number of 1 hryvnia banknotes cannot be negative.\n";
        exit(1);
    }
    one = n;
    return 0;
}

int MoneyO::setFiftyCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 50 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiftyCoins = c;
    return 0;
}

int MoneyO::setTwentyFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 25 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twentyFiveCoins = c;
    return 0;
}

int MoneyO::setTenCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 10 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    tenCoins = c;
    return 0;
}

int MoneyO::setFiveCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 5 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    fiveCoins = c;
    return 0;
}

int MoneyO::setTwoCoins(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 2 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    twoCoins = c;
    return 0;
}

int MoneyO::setOneCoin(int c) {
    if (c < 0) {
        std::cerr << "Error: Number of 1 kopiyka coins cannot be negative.\n";
        exit(1);
    }
    oneCoin = c;
    return 0;
}

double operator/(const MoneyO& m, const MoneyO& m1) {
    double res;
    res = m.total / m1.total;
    return res;
}

MoneyO operator/(MoneyO& m, double divisor) {
    if (divisor == 0.0) {
        std::cerr << "Error: Division by zero.\n";
        return m;
    }
    m.total /= divisor;
    return m;
}

double MoneyO::operator+() { // рахує total, тому не може бути френд
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

bool operator==(const MoneyO& m, const MoneyO& m1) {
    return (m.total == m1.total);
}

bool operator>=(const MoneyO& m, const MoneyO& m1) {
    return (m.total >= m1.total);
}

bool operator<=(const MoneyO& m, const MoneyO& m1) {
    return (m.total <= m1.total);
}

bool operator>(const MoneyO& m, const MoneyO& m1) {
    return (m.total > m1.total);
}

bool operator<(const MoneyO& m, const MoneyO& m1) {
    return (m.total < m1.total);
}

bool operator!=(const MoneyO& m, const MoneyO& m1) {
    return (m.total != m1.total);
}

std::string MoneyO::displayTotal() const {
    std::stringstream sout;

    std::string totalStr = std::to_string(total);
    size_t decimalPos = totalStr.find('.');
    if (decimalPos != std::string::npos) {
        totalStr[decimalPos] = ',';
    }

    sout << "Total amount: " << totalStr;
    return sout.str();
}

ostream& operator << (ostream& out, const MoneyO& r)
{
    out << string(r);
    return out;
}

MoneyO& MoneyO::operator ++() {
    total++;
    return *this;
}

MoneyO& MoneyO::operator --() {
    total--;
    return *this;
}

MoneyO MoneyO::operator ++(int) {
    MoneyO n(*this);
    fiveHundred++;
    return n;
}

MoneyO MoneyO::operator --(int) {
    MoneyO n(*this);
    fiveHundred--;
    return n;
}

MoneyO& MoneyO::operator = (const MoneyO& m) {
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

MoneyO::MoneyO() {
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

MoneyO::MoneyO(const Money& m) {
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

MoneyO::MoneyO(const MoneyO& m) {
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

string MoneyO::toString() const {
    std::stringstream sout;
    sout << "500 uah: " << fiveHundred << ", ";
    sout << "200 uah: " << twoHundred << ", ";
    sout << "100 uah: " << oneHundred << ", ";
    sout << "50 uah: " << fifty << ", ";
    sout << "20 uah: " << twenty << ", ";
    sout << "10 uah: " << ten << ", ";
    sout << "5 uah: " << five << ", ";
    sout << "2 uah: " << two << ", ";
    sout << "1 uah: " << one << ", ";
    sout << "50 kopiyka: " << fiftyCoins << ", ";
    sout << "25 kopiyka: " << twentyFiveCoins << ", ";
    sout << "10 kopiyka: " << tenCoins << ", ";
    sout << "5 kopiyka: " << fiveCoins << ", ";
    sout << "2 kopiyka: " << twoCoins << ", ";
    sout << "1 kopiyka: " << oneCoin;

    return sout.str();
}