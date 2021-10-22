#include <stdio.h>
#include <windows.h>
void Hanoi(int n, char a,char b,char c);
void Move(int n, char a, char b);
int count;
int main()
{
    int n=8;
    printf("汉诺塔的层数:\n");
    scanf(" %d",&n);
    Hanoi(n, 'A', 'B', 'C');
    printf("Exiting main...\n");
    return 0;
}
void Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        Move(n, a, c);
    }
    else
    {
        Hanoi(n - 1, a, c, b);/*把 n-1 从 a 柱子放到 b 柱子上面*/
        Move(n, a, c);        /*把 n 从 a 移动到 c 上*/
        Hanoi(n - 1, b, a, c);/*把n - 1 通过 a 的辅助作用 从 b 移动到 c 上*/
    }
}
void Move(int n, char a, char b)
{
    count++;
    printf("第%d次移动 Move %d: 从 %c 位置 移动到 %c !\n",count,n,a,b);
}
