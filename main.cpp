#define _USE_MATH_DEFINES
#include <iostream>
#include "prog2.h"
#include <math.h>
#include <stdio.h>
#define __CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DEBUG_NEW new(_NORMAL_BLOCK, __FILE__, __LINE__)
#define new DEBUG_NEW


using namespace p2;
	int main() {
		Nefr nefr;
		double x=0, y=0, t, r;
		int num=0;
		while (num != 7) {
			num = dialog(r,t);
			ch(num,x,y,r,t,nefr);
		}
		_CrtDumpMemoryLeaks();
		return 0;
	}
