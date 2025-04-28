
#define _STD_SECURE_NO_WARNINGS 
#include "stdafx.h"
#include "stdlib.h"


int main()
{
	int arr[10];
	//от -10 до 40
	for(int i=0; i<10; i++){
		arr[i] = rand() % (40 -11)+10;
		printf("%d ",arr[i]);
	}
	return 0;
}

