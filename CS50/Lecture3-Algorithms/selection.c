// 选择排序
#include <stdio.h>

int main(void)
{
    int numbers[] = {671, 490, 733, 397, 749, 139, 599, 99, 478, 558, 326, 518, 401, 973, 570, 874, 158, 756, 534, 557, 992, 6, 320, 713, 196, 3, 632, 248, 450, 974, 436, 930, 517, 110, 717, 260, 458, 635, 635, 672, 574, 462, 49, 133, 256, 782, 482, 789, 595, 561, 418, 298, 244, 393, 650, 298, 47, 564, 785, 528, 546, 143, 767, 902, 56, 87, 289, 148, 128, 384, 328, 736, 128, 451, 955, 962, 599, 514, 886, 973, 816, 237, 267, 942, 500, 340, 955, 782, 854, 958, 335, 345, 724, 389, 831, 924, 242, 341, 772, 976};
    int lowest,tmp,Low;
    for (int i = 0;i < 100;i++)
    {
        lowest = numbers[i];
        for (int j = i;j < 100;j++)
        {
            if (numbers[j] < lowest)
            {
                lowest = numbers[j];
                Low = j;
            }
        }
        tmp = numbers[i];
        numbers[i] = lowest;
        numbers[Low] = tmp;
    }
    for (int m = 0;m < 100;m++)
    {
        printf("%d\n",numbers[m]);
    }
    return 0;
}