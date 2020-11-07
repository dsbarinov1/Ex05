#ifndef TASK_1
#define TASK_1
#include<cstring>
template< typename T>
bool less(T a, T b) {
	if (a - b < (T)(0.000000)) {
		return true;
	}
	else {
		return false;
	}
}

template<> bool less<const char*>(const char* a, const char* b) {
	return strcmp(a, b) < 0;
}

#endif