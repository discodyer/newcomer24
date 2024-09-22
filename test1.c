/*
题目一：“猜拳”游戏，使用随机数函数生成一个0-5的随机数，记为A，从终端输入一个数，记为B。
A与B均为范围0-5的整形（int）数据，如果猜中了则获胜（B等于A），反之失败，并打印出A-B的绝对值的十六进制
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    system("chcp 65001");

    srand((unsigned)time(NULL));

    int rand_num = rand() % 6;
    int input;

    scanf("%d", &input);
    
    if (input < 0 || input > 5)
    {
        printf("请输入0~5的数字\n");
        return 0;
    }

    if (input == rand_num)
    {
        printf("恭喜获胜\n");
    }else
    {
        printf("很可惜猜错了\n");
    }
    
    printf("0x%x", abs(rand_num - input));
    return 0;
}