#ifndef PROG2_H
#define PROG2_H
#define _USE_MATH_DEFINES
#include <math.h>


namespace p2 {
	template <class T>
	int getNum(T& a)
	{
		std::cin >> a;
		if (!std::cin.good())
			return -1;
		return 1;
	}
	class Nefr {
	private:
		double r;
	public:
		Nefr() { r = 0; };
		void Set_R(double a) { r = a; }
		double S() {
			return r*6*r*M_PI;
		}
		double L() {
			return 12 * r;
		}
		double Rad(double t) {
			return abs((3 * r / 2) * sin(t));
		}
		double X(double t) {
			return (3 * r / 2) * cos(t) - (r / 2) * cos(3 * t);
		}
		double Y(double t) {
			return (3 * r / 2) * sin(t) - (r / 2) * sin(3 * t);
		}
		void form() {
			const char* help = "(x^2 + y^2 - )^3 = *y^2";
			double a = r / 2;
			int len = strlen(help);
			char num[100];
			sprintf(num, "%.2f", r*r);
			len += strlen(num);
			sprintf(num, "%.2f", 108*a*a*a*a);
			len += strlen(num);
			char* str = new char[len];
			sprintf(str,"%s%.2f%s%2.f%s","(x^2 + y^2 - ",r*r,")^3 = ",108*a*a*a*a,"*y^2");
			std::cout << "\n" << str << std::endl;
			delete[] str;
		}
	};
	int coords(double t, double& x, double& y, Nefr a);
	int dialog(double &r, double& t);
	void ch(int num, double x, double y, double r, double t, Nefr& nefr);
	
}
#endif
