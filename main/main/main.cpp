
#define _STD_SECURE_NO_WARNINGS 
#include "stdafx.h"
#include "stdlib.h"
#include "time.h"


int main()
{
	srand(time(NULL));
	int arr[10];
	//�� -10 �� 40
	for(int i=0; i<10; i++){
		arr[i] = rand() % (40 -11)+10;
		if(arr[i]%2==0){

			printf("%d ",arr[i]);
		}
	}
	return 0;
}

