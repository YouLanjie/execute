#include <stdio.h>
#include <stdlib.h>

#define Clear system("clear");

void welcome();
void history();
void new();
void edit();
void help();

int main() {
	int b=0x31;
	char a[100];
	while (b != 0x30 || b != 0x1B) {
		Clear
		welcome();
		b = getchar();
		getchar();
		Clear
		switch (b) {
			case 0x1B:
			case 0x30:
			case 0x51:
			case 0x71:
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
				system("sleep 0.001");
				break;
		}
	}
	return 0;
}

void welcome() {
	printf("\n\n                                     \033[;31m执行\033[0m\n\n");
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
	puts("选项前面的数字就是触发选项的数字");
	puts("按下任意按键退出：");
	getchar();
	return;
}
