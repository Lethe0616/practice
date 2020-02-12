/*
#include <iostream>
#include<vector>
using namespace std; 
int main() 
{ 
int size; 
cin >> size;
vector<int> num(size);
for(size_t i = 0; i < size; ++i)
	cin >> num[i]; 
int result = num[0]; 
int  sum = 0;
for (int i = 0; i < num.size(); i++) { // 计算到num[i]的子数组的最大和 
	sum +=num[i]; 
	if(sum > result) 
		result = sum;
    if (sum < 0) 
	sum = 0;
     
}
cout << result << endl;
return 0; 
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void DeleteStr(char* str1, char* str2){
	char* pFast = str1;
	char* pSlow = str2;
	int a[256] = { 0 };
	int i;
	int n = strlen(str2);
	for (i = 0; i < n; ++i){
		a[str2[i]] = 1;
	}
	while (*pFast){
		if (a[*pFast] == 0){
			*pSlow = *pFast;
			pSlow++;
		}
		pFast++;
	}
	*pSlow = '\0';
}
int main(){
	char str1[] = "They are students.";
	char str2[] = "aeiou";
	DeleteStr(str1, str2);
	printf("%s\n", str2);
	system("pause");
	return 0;
}


