
#include <stdio.h>
	int main(void)
	{
		int gio, phut, giay, num;
		printf("整数を入力してください\n", &num);
		scanf_s("%d", &num);
		gio = num / 3600;
		phut = (num % 3600) / 60;
		giay = num % 60;
		
		printf(" %d時%d分%d秒", gio, phut, giay);
		return 0;



	return 0;

	
}