#include <iostream>
#include <cmath>
using namespace std;

// ÈòÄêÅĞ¶Ï
int main() {
	int year;
	cin>>year;
	int a=year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    printf("%d",a);
}

