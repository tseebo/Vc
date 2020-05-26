#include "stdafx.h"
#include "win32.h"
char * pchar();

int factorial(int n) {
	int s = 1;
	for (int i = 1; i <= n; i++) {
		s = s*i;
	}
	return s;
}