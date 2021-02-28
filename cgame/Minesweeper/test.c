#include <stdio.h>

void menu ()
{
    printf("*******1.play   0.exit*********\n");
}

void game()
{
    printf("扫雷");
    char board[9][9];
}

void test ()
{
    int input = 0;
    do
    {
        menu();
        printf("请选择：>");
        scanf("%d",&input);
        switch (input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf ("选择错误，重新选择\n");
            break;
        }
    }while (input);
}







int main ()
{
    test();
    return 0;
}