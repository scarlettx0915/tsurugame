/* 徐嘉曼 （71975778）*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXLINE 256

int calculate()
{
    int ret, i, j;
    char input[MAXLINE];
    printf("頭の数：");
    fgets(input, MAXLINE, stdin);
    ret = sscanf(input, "%d", &i); //check if input is integer
    if (ret <= 0)
    {
        printf("数字を入力してください\n");
        exit(1);
    }
    else if (i < 0) //check if input is bigger than 0
    {
        printf("0より大きい数字を入力してください\n");
        exit(1);
    }
    printf("足の数：");
    fgets(input, MAXLINE, stdin);
    ret = sscanf(input, "%d", &j);
    if (ret <= 0)
    {
        printf("数字を入力してください\n");
        exit(1);
    }
    else if (j < 0)
    {
        printf("0より大きい数字を入力してください\n");
        exit(1);
    }

    int x, y;
    bool didBreak = false; //set flag
    for (x = 0; x <= i; x++)
    {
        y = i - x;
        if (2 * x + 4 * y == j)
        {
            didBreak = true;
            break;
        }
    }
}

int main()
{
    calculate();
    if (didBreak) //if found answer
    {
        printf("鶴の数：%d\n", x);
        printf("亀の数：%d\n", y);
        continue;
    }
    else
    {
        printf("計算できませんでした。\n"); //if didn't find answer
        continue;
    }
    return (0);
}