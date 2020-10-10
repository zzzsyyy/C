#include <stdio.h>
#include <string.h>
int main()
{
    int a[1000];
    /*c语言形式的注释
     * 缺陷： 不支持嵌套
     */
    //C++风格注释
    memset(a,0,sizeof(a));
    int input;
    printf("你要好好学习吗？（1/0）>:");
    scanf("%d",&input);
    if (input == 1)
        printf("得到offer");
    else
        printf("卖红薯");

    //循环：while
    //for
    //do...while
    int line = 0;
    while (line<20000)
    {
        printf("敲一行代码%d\n",line);
        line++;
    }
    if (line>=20000)
    printf("okk");

    int sum = Add(1,3) ;
    printf("%d",sum);
    return 0;
}

int Add(int num1,int num2)//函数，后面不加分号
{//函数体
    int sum = num1 + num2;
    return sum;
}

