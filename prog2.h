#ifndef PROG2_H
#define PROG2_H
#define _USE_MATH_DEFINES
#include <math.h>


namespace p2 {
	template <class T>
	int getNum(T& a, const char* text) {
		bool flag = false;
		std::cout << text << std::endl;
		do {
			if (flag == true) {
				std::cout << "Error, try again:";
				flag = false;
			}
			std::cin >> a;
			if (std::cin.eof() || std::cin.bad()) {
				return -1;
			}
			else if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				flag = true;
			}

		} while (flag == true);
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return 0;
	}

	class Nefr {
	private:
		double r;
	public:
		Nefr() { r = 0; };
		void Set_R(double a) { r = a; }
		double S() const {
			return r*6*r*M_PI;  //task 5
		}
		double L() const {
			return 12 * r; // task 3
		}
		double Rad(double t) const {
			return abs((3 * r / 2) * sin(t)); // task 4
		}
		double X(double t) const {
			return (3 * r / 2) * cos(t) - (r / 2) * cos(3 * t);  // task 6
		}
		double Y(double t) const {
			return (3 * r / 2) * sin(t) - (r / 2) * sin(3 * t);
		}
		void form() const { // task 7
			const char* help = "(x^2 + y^2 - )^3 = *y^2";
			double a = r / 2;
			int len = strlen(help)+1;
			char num[100];
			sprintf(num, "%.2f", r*r);
			len += strlen(num);
			sprintf(num, "%.2f", 108*a*a*a*a);
			len += strlen(num);
			
			char* str = new char[len];
			sprintf(str,"%s%.2f%s%.2f%s","(x^2 + y^2 - ",r*r,")^3 = ",108*a*a*a*a,"*y^2");
			std::cout << "\n" << str << std::endl;
			delete[] str;
		}
	};
	int coords(double t, double& x, double& y, Nefr a);
	int dialog(double &r, double& t);
	void ch(int num, double x, double y, double r, double t, Nefr& nefr);
}
#endif
