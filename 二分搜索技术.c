#include <stdio.h>
#include <stdlib.h>
 
int Search(int *a, int x)
{
    // 在顺序表中折半查找 x 的数据元素。若找到，则函数值为
    int left = 0, middle; // 该元素的数组下标；否则为0。
    int right = 4;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (x == a[middle])
            return middle; // 找到待查元素
        else if (x < a[middle])
            right = middle - 1; // 继续在前半区间进行查找
        else
            left = middle + 1; // 继续在后半区间进行查找
    }
    return -1; // 顺序表中不存在待查元素
}
void main()
{
    int *a, x, i;
    int b[15] = {0};
    a = b;
 
    printf("请从小到大输入5个整数：\n");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &b[i - 1]);
        printf("\n");
    }
    printf("请输入你要查找的数：\n");
    scanf("%d", &x);
    i = Search(a, x);
    if (-1 == i)
        printf("你要查找的数不在目标数组中！\n");
    else
        printf("你要查找的数的数组下标为 %d \n", i);
}
