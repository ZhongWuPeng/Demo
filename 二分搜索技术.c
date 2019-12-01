#include <stdio.h>
#include <stdlib.h>
 
int Search(int *a, int x)
{
    // ��˳������۰���� x ������Ԫ�ء����ҵ�������ֵΪ
    int left = 0, middle; // ��Ԫ�ص������±ꣻ����Ϊ0��
    int right = 4;
    while (left <= right)
    {
        middle = (left + right) / 2;
        if (x == a[middle])
            return middle; // �ҵ�����Ԫ��
        else if (x < a[middle])
            right = middle - 1; // ������ǰ��������в���
        else
            left = middle + 1; // �����ں��������в���
    }
    return -1; // ˳����в����ڴ���Ԫ��
}
void main()
{
    int *a, x, i;
    int b[15] = {0};
    a = b;
 
    printf("���С��������5��������\n");
    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &b[i - 1]);
        printf("\n");
    }
    printf("��������Ҫ���ҵ�����\n");
    scanf("%d", &x);
    i = Search(a, x);
    if (-1 == i)
        printf("��Ҫ���ҵ�������Ŀ�������У�\n");
    else
        printf("��Ҫ���ҵ����������±�Ϊ %d \n", i);
}
