#include <stdio.h>
#include <stdlib.h>

#define Clear system("clear");

void welcome();
void history();
void new();
void edit();
void help();

int main() {
	int a=0,b=0x31;
	while (b != 0x30 || b != 0x1B) {
		printf("\033[?25l\n");
		Clear
		if (a >= 30)
		{
			puts("不好意思，您输入的错误次数大于29了，为了防止出错，即将退出程序\033[?25h");
			return 0;
		}
		welcome();
		b = getchar();
		getchar();
		printf("\033[0m\033[?25l\n");
		Clear
		switch (b) {
			case 0x1B:
			case 0x30:
			case 0x51:
			case 0x71:
				printf("\033[0m\n");
				Clear
				return 0;
				break;
			case 0x31:
				history();
				break;
			case 0x32:
				new();
				break;
			case 0x33:
				edit();
				break;
			case 0x34:
				help();
				break;
			default:
				puts("输入错误！即将返回...");
				a++;
				break;
		}
	}
	printf("\033[?25h\n");
	Clear
	return 0;
}

void welcome() {
	printf("\n                                     \033[;31m执行\033[0m\n\n\n\n");
	printf("\033[;33m--------------------------------------------------------------------------------\033[0m\n");
	printf("\033[;33m|                                                                              |\033[0m\n");
	printf("\033[;33m|\033[0m                   1.历史文件                    2.新的文件                   \033[;33m|\033[0m\n");
	printf("\033[;33m|\033[0m                   3.编辑历史                    4.程序帮助                   \033[;33m|\033[0m\n");
	printf("\033[;33m|\033[0m                                0.退出程序                                    \033[;33m|\033[0m\n");
	printf("\033[;33m|\033[0m  请选择:\033[69C\033[;33m|\n");
	printf("--------------------------------------------------------------------------------\033[0m\033[1A\033[69D");

}

void history() {
	return;
}

void new() {
	return;
}

void edit() {
	return;
}

void help() {
	puts("\033[34mtip1:选项前面的数字就是触发选项的数字\033[0m\n");
	puts("\033[33m按下任意按键退出：");
	getchar();
	return;
}
