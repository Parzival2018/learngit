#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
inline bool EVEN(int x) { return (x % 2) == 0; }
inline bool ODD(int x) { return (x % 2) != 0; }

void Assert(bool val, string s)
{
	if(!val) 
	{
		cout << "Assertion Failed: " << s << endl;
	}
}
template<typename E>
inline void swap(E A[], int i, int j)
{
	E temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
inline void Randomize()
{
	srand(1);
}
inline int Random(int n)
{
	return rand() % (n);
}
