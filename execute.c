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
	printf("--------------------------------------------------------------------------------\n");
	printf("|                                    执行                                      |\n");
	printf("|                                                                              |\n");
	printf("|                             1--------历史文件                                |\n");
	printf("|                             2--------新的文件                                |\n");
	printf("|                             3--------编辑历史                                |\n");
	printf("|                             4--------程序帮助                                |\n");
	printf("|                             0--------退出程序                                |\n");
	printf("|  请选择:\t\t\t\t\t\t\t\t       |\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("\033[;32mhello world\033[5m");
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
