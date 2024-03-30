#include "MoneyC.h"
#include "MoneyO.h"

#include <iostream>

int main() {
	MoneyO mon1;
	Money mon(5, 2, 1, 0, 5, 0, 1, 8, 0, 2, 8, 5, 13, 14, 15);
	MoneyO mon2(mon);
	MoneyO mon3(mon2);

	std::cout << "mon1 = "; std::cin >> mon1;
	std::cout << "mon1: " << mon1 << std::endl;
	std::cout << "mon1 total: " << +mon1 << std::endl;
	std::cout << mon1.displayTotal() << std::endl;

	std::cout << "mon2: " << mon2 << std::endl;
	std::cout << "mon2 total: " << +mon2 << std::endl;
	std::cout << mon2.displayTotal() << std::endl;

	std::cout << "mon3: " << std::endl;
	std::string a, b;
	a = mon3.toString();
	std::cout << a << std::endl;
	std::cout << "mon3 total: " << +mon3 << std::endl;
	b = mon3.displayTotal();
	std::cout << b << std::endl;

	if (mon1 == mon2) {
		std::cout << "mon1 = mon2" << std::endl;
	}
	else std::cout << "mon1 != mon2" << std::endl;

	mon1 / 2;
	std::cout << "mon1 sum devide by 2: " << mon1.getTotal() << std::endl;

	double t = mon2 / mon3;
	std::cout << "mon2/mon3 = " << t << std::endl;

	if (mon1 >= mon2) {
		std::cout << "mon1 >= mon2" << std::endl;
	}
	else std::cout << "mon1 !>= mon2" << std::endl;

	if (mon1 <= mon2) {
		std::cout << "mon1 <= mon2" << std::endl;
	}
	else std::cout << "mon1 !<= mon2" << std::endl;

	if (mon1 > mon2) {
		std::cout << "mon1 > mon2" << std::endl;
	}
	else std::cout << "mon1 !> mon2" << std::endl;

	if (mon1 < mon2) {
		std::cout << "mon1 < mon2" << std::endl;
	}
	else std::cout << "mon1 !< mon2" << std::endl;

	cout << "mon1++: " << mon1++ << endl;
	cout << mon1.getTotal() << endl;
	cout << "++mon1: " << ++mon1 << endl;
	cout << mon1 << endl;

	cout << "mon1--: " << mon1-- << endl;
	cout << mon1.getTotal() << endl;
	cout << "--mon1: " << --mon1 << endl;
	cout << mon1 << endl;

	MoneyC monc1;
	MoneyC monc2(mon);
	MoneyC monc3(monc2);

	std::cout << "monc1 = "; std::cin >> monc1;
	std::cout << "monc1: " << monc1 << std::endl;
	std::cout << "monc1 total: " << +monc1 << std::endl;
	std::cout << monc1.displayTotal() << std::endl;

	std::cout << "monc2: " << monc2 << std::endl;
	std::cout << "monc2 total: " << +monc2 << std::endl;
	std::cout << monc2.displayTotal() << std::endl;

	std::cout << "monc3: " << std::endl;
	std::string a1, b1;
	a1 = monc3.toString();
	std::cout << a1 << std::endl;
	std::cout << "monc3 total: " << +monc3 << std::endl;
	b1 = monc3.displayTotal();
	std::cout << b1 << std::endl;

	if (monc1 == monc2) {
		std::cout << "monc1 = monc2" << std::endl;
	}
	else std::cout << "monc1 != monc2" << std::endl;

	monc1 / 2;
	std::cout << "monc1 sum devide by 2: " << monc1.getTotal() << std::endl;

	double t1 = monc2 / monc3;
	std::cout << "monc2/monc3 = " << t1 << std::endl;

	if (monc1 >= monc2) {
		std::cout << "monc1 >= monc2" << std::endl;
	}
	else std::cout << "monc1 !>= monc2" << std::endl;

	if (monc1 <= monc2) {
		std::cout << "monc1 <= monc2" << std::endl;
	}
	else std::cout << "monc1 !<= monc2" << std::endl;

	if (monc1 > monc2) {
		std::cout << "monc1 > monc2" << std::endl;
	}
	else std::cout << "monc1 !> monc2" << std::endl;

	if (monc1 < monc2) {
		std::cout << "monc1 < monc2" << std::endl;
	}
	else std::cout << "monc1 !< monc2" << std::endl;

	cout << "monc1++: " << monc1++ << endl;
	cout << monc1.getTotal() << endl;
	cout << "++monc1: " << ++monc1 << endl;
	cout << monc1 << endl;

	cout << "monc1--: " << monc1-- << endl;
	cout << monc1.getTotal() << endl;
	cout << "--monc1: " << --monc1 << endl;
	cout << monc1 << endl;

	cin.get();
	return 0;
}
