// 用命令行参数说Hello
#include <stdio.h>

int main(int argc,char *argv[])
{
    if (argc == 2)
    {
        printf("Hello,%s\n",argv[1]);
    }
    else
    {
        printf("Please enter \"./greet your_name\" \n");
    }
    return 0;
}