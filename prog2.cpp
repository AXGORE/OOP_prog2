#include <iostream>
#include "prog2.h"
namespace p2 {
	int coords(double t, double& x, double& y, Nefr a) {
		x = a.X(t);
		y = a.Y(t);
		return 0;
	}
	int dialog(double& r, double& t) {
		int a;
		const char* opt[] = { "1.Enter radius", "2.S","3.L","4.R","5.Coords","6.Char form","7.Exit"};
		for (int i = 0; i < 7; i++) {
			std::cout << opt[i] << std::endl;
		}
		std::cout << "Choose one option" << std::endl;
		getNum(a);
		if (a < 1 && a>7) {
			std::cout << "Error, try again" << std::endl;
		}
		while (a < 1 && a>7) {
			getNum(a);
			if (a < 1 && a>7) {
				std::cout << "Error, try again" << std::endl;
			}
		}
		if (a == 1) {
			std::cout << "enter radius" << std::endl;
			getNum(r);
			return a;
		}
		if (a == 2) {
			return a;
		}
		if (a == 3) {
			return a;
		}
		if (a == 4) {
			std::cout << "enter t" << std::endl;
			getNum(t);
			return a;
		}
		if (a == 5) {
			std::cout << "enter t" << std::endl;
			getNum(t);
			return a;
		}
		if (a == 6) { return a; }
		if (a == 7) { return a; }
		else return 7;
	}
	void ch(int num, double x, double y, double r,double t, Nefr& nefr) {
		if (num == 1) {
			nefr.Set_R(r);
			return;
		}
		else if (num == 2) {
			x = nefr.S();
			std::cout << "\nS=" << x << std::endl;
			return;
		}
		else if (num == 3) {
			x = nefr.L();
			std::cout << "\nL=" << x << std::endl;
			return;
		}
		else if (num == 4) {
			x = nefr.Rad(t);
			std::cout << "\nRad=" << x << std::endl;
			return;
		}
		else if (num == 5) {
			coords(t,x,y,nefr);
			std::cout << "\nX=" << x << std::endl;
			std::cout << "Y=" << y << std::endl;
			return;
		}
		else if (num == 6) { 
			nefr.form();
			return; }
		else if (num == 7) { return; }
	}
}